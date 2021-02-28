#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

class FileNotFoundException : public exception {
	string message;
public :
	FileNotFoundException(const string& fname) :
		message("File \"" + fname + "\" not found") {}
	virtual const char* what() const throw() {
		return message.c_str();
	}
};
class CStudent {
private :
	string m_Name;
	int m_Number;
	string m_Major;
public :
	CStudent() {}
	~CStudent() {}
	void setAll(string _name, int _num, string _maj) {
		m_Name = _name;
		m_Number = _num;
		m_Major = _maj;
	}
	void Display() {
		cout << "이름: " << m_Name << endl;
		cout << "학번: " << m_Number << endl;
		cout << "전공: " << m_Major << endl<<endl;
	}
};
vector<CStudent> read_file(string& filename) {
	ifstream fin(filename);
	if (!fin) {
		throw FileNotFoundException(filename);
	}
	vector<CStudent> result;
	int num, id;
	string name, major;
	CStudent tmpStudent;
	fin >> num;
	for (int i = 0; i < num; i++) {
		fin >> name;
		fin >> id;
		fin >> major;
		tmpStudent.setAll(name, id, major);
		result.push_back(tmpStudent);
	}
	return result;
}
int main() {
	string str;

	cout << "파일 이름 : ";
	cin >> str;
	try {
		vector<CStudent> numbers = read_file(str);
		for (CStudent value : numbers)
			value.Display();
	}
	catch (std::exception& e) {
		cout << e.what() << '\n';
	}
	return 0;
}

/*
//응용문제 02
int main() {
	vector<int> list;
	srand((unsigned)time(NULL));
	int num = rand() % 100 + 1;
	list = vector<int>(num);
	int cnt = -1;
	while (1) {
		cnt++;
		try {
			list.at(cnt) = cnt;
		}
		catch (exception& e) {
			cout << "현재 list는 " << cnt << "의 크기를 가지고 있다." << endl;
			break;
		}
	}
	return 0;
}
*/
/*
//응용문제 01
int main() {
	vector<int> list{ 10,20,30,40,50 };
	int num;
	while (1) {
		cout << "출력할 숫자의 수 : ";
		cin >> num;
		if (num <= 0)
			break;
		try {
			for (int i = 0; i < num; i++) {
				cout << list.at(i) << " ";
			}
			cout << endl;
		}
		catch (exception& e) {
			cout << "\nIndex is out of range. Please try again" << endl;
		}
	}
	cout << "Program exit..." << endl;
	return 0;
}
*/
/*
//기초문제 05
class FileNotFoundException : public exception {
	string message;
public :
	FileNotFoundException(string _m) :
		message("File not found: " + _m) {}
	virtual const char* what() const throw() {
		return message.c_str();
	}

};
vector<int> load_vector(string filename) {
	ifstream fin(filename);
	if (!fin) {
		throw FileNotFoundException(filename);
	}
	vector<int> result;
	int num, value;

	fin >> num;
	for (int i = 0; i < num; i++) {
		fin >> value;
		result.push_back(value);
	}
	return result;
}
int main() {
	try {
		vector<int> v = load_vector("values.dat");
		for (int elem : v)
			cout << elem << ' ';
		cout << endl;
	}
	catch (exception& e) {
		cout << e.what() << endl;
	}
	return 0;
}
*/
/*
//기초문제 04
int main() {
	vector<int> v{ 1,2,3,4 };
	int index;
	cin >> index;
	try {
		cout << v.at(index) << endl;
	}
	catch (exception& e) {
		cout << e.what() << endl;
		cout << "인덱스 에러" << endl;
	}

	cout << "[Program is running]" << endl;
	return 0;
}
*/
/*
//기초문제 03
int main() {
	vector<int> v1 = { 1,2,3,4 };
	for (int& elem : v1) {
		cout << elem << '\t';
	}
	cout << endl;

	for_each(begin(v1), end(v1), [](int elem) {cout << elem << '\t'; });
	cout << endl;

	for_each(begin(v1), end(v1), [](int& elem) {elem++; });
	for_each(begin(v1), end(v1), [](int elem) {cout << elem << '\t'; });
	cout << endl;

	int a = 10;
	for_each(begin(v1), end(v1), [a](int& elem) {elem+=a; });
	for_each(begin(v1), end(v1), [](int elem) {cout << elem << '\t'; });
	cout << endl;

	vector<int> v2(v1.size());

	copy(begin(v1)+1, end(v1)-1, begin(v2)+2);
	for_each(begin(v2), end(v2), [](int elem) {cout << elem << '\t'; });
	cout << endl;

	transform(begin(v1), end(v1), begin(v2), [](int& elem) {return elem * elem; });
	for_each(begin(v2), end(v2), [](int elem) {cout << elem << '\t'; });
	cout << endl;

}
*/
/*
//기초문제 02
int evaluate2(function<int(int, int)> f, int x, int y) {
	return f(x, y);
}

int main() {
	int a = 10, b = 20;

	cout << evaluate2([a](int x, int y) {return a + x + y; }, 2, 3) << endl;

	a = 20;
	[&](int x) {cout << (a * x) << endl; }(b);
	cout << "a: " << a << endl;
	return 0;
}
*/
/*
//기초문제 01
int sum(int x, int y) { return x + y; }
int mult(int x, int y) { return x * y; }
int evaluate(int (*f)(int, int), int x, int y) {
	return f(x,y);
}

int main() {
	cout << evaluate(&sum, 2, 3) << endl;
	cout << evaluate(&mult, 2, 3) << endl;

	cout << evaluate([](int x, int y){return x + y; }, 20, 30) << endl;
	cout << evaluate([](int x, int y){return x * y; }, 20, 30) << endl;

	[](int x, int y){ cout << x << ", " << y<<endl; } (20, 30);
	auto f = [](int x, int y) {return x - y; };
	cout << f(1000, 2000) << endl;

	return 0;
}
*/
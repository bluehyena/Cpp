#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	float phi = 30.1415;
	int width = 20;

	cout << "\n|" << setfill('*') << setw(width) << "|" << endl;
	cout << "\n|" << setfill('*') << setw(width) << "|" << endl;
	cout.fill(' ');
	cout << resetiosflags(ios::right);
	
	cout << "\n|" << setw(30) << setiosflags(ios::left) << "***************" << setw(10) << "프로그램 3"
		<< setiosflags(ios::right) << setw(30) << "**************\n";

	double pi = 13.142592;
	cout << setfill(' '); 
	cout << "Default:" << endl;
	cout << "[precision=3] " << setw(15) << setprecision(3) << pi;
	cout << "\t[precision=5] " << setprecision(5) << pi << endl;


	cout << resetiosflags(ios::fixed);  	
	cout << "Scientific:" << endl;
	cout << setiosflags(ios::scientific);   
	cout << "[precision=3] " << setw(15) << setprecision(3) << dec << pi;
	cout << "\t[precision=5] " << setprecision(5) << pi << endl;
	return 0;
}


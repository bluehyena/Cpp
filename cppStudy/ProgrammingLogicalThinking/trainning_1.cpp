#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	double pi = 30.1415;
	int width = 20;

	cout.fill(' ');
	cout << resetiosflags(ios::right);
	cout << "\n" << setw(31) << setiosflags(ios::left) << "********************" << setw(10) << setiosflags(ios::right) << pi << "ÀÇ Ãâ·Â" << setiosflags(ios::right) << setw(40) << "********************" << endl;

	cout << setw(88) << setfill('=') << "=" << endl;
	cout << setiosflags(ios::right) << setfill(' ');
	cout << "|" << setw(20) << "Precision" << " |" << setw(20) << "default" << " |" << setw(20) << "scientific" << " |" << setw(19) << "fixed" << " |" << endl;

	cout << setw(88) << setfill('-') << "-" << endl;
	cout.fill(' ');
	cout << "|" << setw(20) << "3" << " |" << setw(20) << setprecision(3) << pi << " |" << setw(20) << setiosflags(ios::scientific) << setprecision(3) << dec << pi << " |" << setw(19) << fixed << setprecision(3) << dec << pi << " |" << endl;

	cout << resetiosflags(ios::fixed);
	cout << setw(88) << setfill('-') << "-" << endl;

	cout.fill(' ');
	cout << "|" << setw(20) << "6" << " |" << setw(20) << setprecision(5) << pi << " |" << setw(20) << setiosflags(ios::scientific) << setprecision(6) << dec << pi << " |" << setw(19) << fixed << setprecision(6) << dec << pi << " |" << endl;
	cout << setw(88) << setfill('=') << "=";

	return 0;
}


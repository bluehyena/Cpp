#include <iostream>
#include "KhuString.h"

int main() {
	
	std::cout << khu::Construct("Hello");
	std::cout << khu::GetLength();


	delete[] khu::gString;
	return 0;
}
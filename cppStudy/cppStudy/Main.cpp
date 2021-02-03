#include <iostream>
#include "KhuString.h"

int main() {
	
	std::cout << "Construct(Hello) 실행결과 : " << khu::Construct("Hello") << std::endl;
	std::cout << "GetLength 실행결과 : " << khu::GetLength() << std::endl;
	khu::Append(", World!");
	std::cout << "Append(World) 실행 후 gString : " << khu::gString << std::endl;
	std::cout << "GetLength 실행결과 : " << khu::GetLength() << std::endl;
	std::cout << "RemoveAt(1)의 실행결과 : " << khu::RemoveAt(12) << std::endl;
	std::cout << "GetLength 실행결과 : " << khu::GetLength() << std::endl;
	std::cout << "RemoveAt(1) 후 gString : " << khu::gString << std::endl;
	std::cout << "RemoveAt 안되는값 실행결과 : " << khu::RemoveAt(1000) << std::endl;
	std::cout << "RemoveAt(1000) 후 gString : " << khu::gString << std::endl;
	khu::Reverse();
	std::cout << "Reverse 후 gString : " << khu::gString << std::endl;
	std::cout << "GetLength 실행결과 : " << khu::GetLength() << std::endl;
	khu::ToUpper();
	std::cout << "ToUpper 후 gString : " << khu::gString << std::endl;
	std::cout << "GetLength 실행결과 : " << khu::GetLength() << std::endl;
	khu::ToLower();
	std::cout << "ToLower 후 gString : " << khu::gString << std::endl;
	std::cout << "GetLength 실행결과 : " << khu::GetLength() << std::endl;
	std::cout << "Copy(Wow!) 실행결과 : " << khu::Copy("Wow!") << std::endl;
	std::cout << "GetLength 실행결과 : " << khu::GetLength() << std::endl;
	std::cout << "Copy 후 gString : " << khu::gString << std::endl;
	std::cout << "GetLength 실행결과 : " << khu::GetLength() << std::endl;
	std::cout << "Copy 후 gString : " << khu::gString << std::endl;
	std::cout << "GetLength 실행결과 : " << khu::GetLength() << std::endl;

	delete[] khu::gString;

	return 0;
}
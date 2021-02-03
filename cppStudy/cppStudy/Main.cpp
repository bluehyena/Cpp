#include <iostream>
#include "KhuString.h"

int main() {
	
	std::cout << "Construct(Hello) ������ : " << khu::Construct("Hello") << std::endl;
	std::cout << "GetLength ������ : " << khu::GetLength() << std::endl;
	khu::Append(", World!");
	std::cout << "Append(World) ���� �� gString : " << khu::gString << std::endl;
	std::cout << "GetLength ������ : " << khu::GetLength() << std::endl;
	std::cout << "RemoveAt(1)�� ������ : " << khu::RemoveAt(12) << std::endl;
	std::cout << "GetLength ������ : " << khu::GetLength() << std::endl;
	std::cout << "RemoveAt(1) �� gString : " << khu::gString << std::endl;
	std::cout << "RemoveAt �ȵǴ°� ������ : " << khu::RemoveAt(1000) << std::endl;
	std::cout << "RemoveAt(1000) �� gString : " << khu::gString << std::endl;
	khu::Reverse();
	std::cout << "Reverse �� gString : " << khu::gString << std::endl;
	std::cout << "GetLength ������ : " << khu::GetLength() << std::endl;
	khu::ToUpper();
	std::cout << "ToUpper �� gString : " << khu::gString << std::endl;
	std::cout << "GetLength ������ : " << khu::GetLength() << std::endl;
	khu::ToLower();
	std::cout << "ToLower �� gString : " << khu::gString << std::endl;
	std::cout << "GetLength ������ : " << khu::GetLength() << std::endl;
	std::cout << "Copy(Wow!) ������ : " << khu::Copy("Wow!") << std::endl;
	std::cout << "GetLength ������ : " << khu::GetLength() << std::endl;
	std::cout << "Copy �� gString : " << khu::gString << std::endl;
	std::cout << "GetLength ������ : " << khu::GetLength() << std::endl;
	std::cout << "Copy �� gString : " << khu::gString << std::endl;
	std::cout << "GetLength ������ : " << khu::GetLength() << std::endl;

	delete[] khu::gString;

	return 0;
}
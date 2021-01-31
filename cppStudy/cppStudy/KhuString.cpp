#pragma once

#include <iostream>
#include "KhuString.h"

/*
Construct
gString�� ���� str�� ���� ���ڿ� ���� ���� ���ڿ��̴�
Construct(��Hello��);	// gString�� ��Hello��

GetLength
gString�� ���̸� ��ȯ�Ѵ�
GetLength();	// 5

Append
gString ���ڿ� �� �ڿ� str�� ���ڿ��� �߰��Ѵ�
Append(��, World!��);	// gString�� ��Hello, World!��

RemoveAt
i ��° ���ڸ� �����Ѵ�
RemoveAt(0);	// gString�� ��ello, World!��

Reverse
���ڿ��� �����Ѵ�
Reverse();	// gString�� ��!dlroW ,olle��

ToUpper
���ڿ��� ���ĺ����� ���� �빮�ڷ� �����
ToUpper();	// gString�� ��!DLROW, OLLE��

ToLower
���ڿ��� ���ĺ����� ���� �ҹ��ڷ� �����
ToLower();	// gString�� !dlrow, olle��

Copy
gString�� str�� ���ڿ��� �����سִ´�
Copy(��Wow!��);	// gString�� ��Wow!��

*/

namespace khu {
	
	char* gString = nullptr;

	const char* Construct(const char* str)
	{
		int length;
		for (length = 0; str[length]; ++length);
		
		const char* gString = new char[length + 1];
		gString = str;
		
		return gString;
	}

	unsigned int GetLength()
	{
		unsigned int length = 0;
		char* p_str = gString;
		while (1) {
			if (*p_str == '\0')
				break;
			else {
				length++;
				p_str++;
			}
		}
		return length;
	}


	/*
	void Append(const char* str)
	{

	}

	bool RemoveAt(unsigned int i)
	{

	}

	void Reverse()
	{

	}

	void ToUpper()
	{

	}

	void ToLower()
	{

	}

	const char* Copy(const char* str)
	{

	}
	*/
}
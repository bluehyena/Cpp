#pragma once

#include <iostream>
#include "KhuString.h"

/*
Construct
gString은 이제 str과 같은 문자열 값을 갖는 문자열이다
Construct(“Hello”);	// gString은 “Hello”

GetLength
gString의 길이를 반환한다
GetLength();	// 5

Append
gString 문자열 맨 뒤에 str의 문자열을 추가한다
Append(“, World!”);	// gString은 “Hello, World!”

RemoveAt
i 번째 문자를 제거한다
RemoveAt(0);	// gString은 “ello, World!”

Reverse
문자열을 반전한다
Reverse();	// gString은 “!dlroW ,olle”

ToUpper
문자열의 알파벳들을 전부 대문자로 만든다
ToUpper();	// gString은 “!DLROW, OLLE”

ToLower
문자열의 알파벳들을 전부 소문자로 만든다
ToLower();	// gString은 !dlrow, olle”

Copy
gString에 str의 문자열을 복사해넣는다
Copy(“Wow!”);	// gString은 “Wow!”

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
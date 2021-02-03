#pragma once

#include <cassert>
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

/*
1. 문자를 바로 Boolean 처리에 사용하면 안되죠~ -------	 해결
2. Boolean에는 제발 boolean만 ------------------------   해결
3. 타입 통일 -----------------------------------------   해결
4. 중괄호 어디갔어 + 코딩 스탠다드 준수 --------------   해결
5. 한 줄에 여러 변수 선언하지 마세요 -----------------   해결
6. Append에 메모리 누수 ------------------------------	 해결
7. RemoveAt에서는 메모리 재할당 필요 없음 ------------   해결
8. Reverse 알고리듬 다시 -----------------------------	 해결
9. 연산은 같은 타입끼리 ------------------------------   해결
10. ANSI 표준이 아니면 이거 에러남 -------------------   ..ㅠ
12. Copy에서 중요한 조건 하나 체크 안해줌 ------------	 해결..?
13. Copy 메모리 누수 ---------------------------------	 해결
*/

/*
1. 매개변수에 대한 null 체크 부재 ----------------------------------------- 해결
2. for문 비어있어도 중괄호 ------------------------------------------------	해결					
3. GetLength가 있는데 굳이 따로 gString의 길이를 파악할 필요가? ----------- 해결
4. RemoveAt Boundary check 제대로 안되어있음 ------------------------------ 해..결? -> 해결!!
5. Upper  / Lower을 하는데 굳이 동적할당? --------------------------------- 해결
*/

/*
1. 모던 C++에서 널 포인터는 nullptr를 씁니다 -------------------------------- 넵
2. Unsigned의 개념 ---------------------------------------------------------- 0 이상 양의 정수, 0 ~ 4,294,967,295
3. ToUpper / ToLower 다시 --------------------------------------------------- 이게맞나..
*/

/*
1. 안쓰는 include들 삭제 -------------------------------------------- 옙
2. i는 왜 null 체크? ------------------------------------------------ 없앴습니다
3. ToUpper / ToLower ㅋㅋㅋ ‘a’ – ‘A’ 왜 안쓰냐고 --------------- 아..
*/

namespace khu {

	char* gString = nullptr;

	const char* Construct(const char* str)
	{
		assert(str != nullptr);
		unsigned int length = 0;
		for (; str[length] != '\0'; ++length)
		{
		}

		gString = new char[length + 1];

		for (unsigned int i = 0; i < length; ++i)
		{
			gString[i] = str[i];
		}

		gString[length] = '\0';

		return gString;
	}

	unsigned int GetLength()
	{
		unsigned int length = 0;
		char* pGstr = gString;
		while (*pGstr != '\0')
		{
			++length;
			++pGstr;
		}
		return length;
	}

	void Append(const char* str)
	{
		assert(str != nullptr);
		unsigned int length = GetLength();
		unsigned int newLength = 0;

		for (; str[newLength] != '\0'; ++newLength)
		{
		}

		char* appendedString = new char[newLength + length + 1];

		for (unsigned int i = 0; i < length; ++i)
		{
			appendedString[i] = gString[i];
		}

		for (unsigned int i = 0; i < newLength; ++i)
		{
			appendedString[i + length] = str[i];
		}

		appendedString[newLength + length] = '\0';
		delete[] gString;
		gString = appendedString;

	}

	bool RemoveAt(unsigned int i)
	{
		unsigned int length = GetLength();

		if (length - 1 < i)
		{
			return false;
		}
		else
		{
			for (int j = i; j < length; ++j)
			{
				gString[j] = gString[j + 1];
			}
			return true;
		}
	}

	void Reverse()
	{
		unsigned int length = GetLength();;

		for (int i = 0; (length - 1) / 2 >= i; ++i)
		{	
			char temp = gString[length - 1 - i];
			gString[length - 1 - i] = gString[i];
			gString[i] = temp;
		}
	}

	void ToUpper()
	{
		unsigned int length = GetLength();;

		for (int i = 0; i < length; ++i)
		{
			if (gString[i] >= 'a' && gString[i] <= 'z') 
			{
				gString[i] = gString[i] - ('a' - 'A');
			}
		}
	}

	void ToLower()
	{
		unsigned int length = GetLength();;
		
		for (int i = 0; i < length; ++i)
		{
			if (gString[i] >= 'A' && gString[i] <= 'Z')
			{
				gString[i] = gString[i] + ('a' - 'A');
			}
		}
	}

	const char* Copy(const char* str)
	{
		assert(str != nullptr);
		if (str != gString)
		{
			unsigned int length = GetLength();;
			char* copiedString = nullptr;

			copiedString = new char[length + 1];

			for (int i = 0; i < length; ++i)
			{
				copiedString[i] = str[i];
			}

			copiedString[length] = '\0';
			delete[] gString;
			gString = copiedString;

			return gString;
		}
	}
}
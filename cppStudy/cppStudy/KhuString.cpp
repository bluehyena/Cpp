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

/*
1. ���ڸ� �ٷ� Boolean ó���� ����ϸ� �ȵ���~ -------	 �ذ�
2. Boolean���� ���� boolean�� ------------------------   �ذ�
3. Ÿ�� ���� -----------------------------------------   �ذ�
4. �߰�ȣ ��𰬾� + �ڵ� ���Ĵٵ� �ؼ� --------------   �ذ�
5. �� �ٿ� ���� ���� �������� ������ -----------------   �ذ�
6. Append�� �޸� ���� ------------------------------	 �ذ�
7. RemoveAt������ �޸� ���Ҵ� �ʿ� ���� ------------   �ذ�
8. Reverse �˰��� �ٽ� -----------------------------	 �ذ�
9. ������ ���� Ÿ�Գ��� ------------------------------   �ذ�
10. ANSI ǥ���� �ƴϸ� �̰� ������ -------------------   ..��
12. Copy���� �߿��� ���� �ϳ� üũ ������ ------------	 �ذ�..?
13. Copy �޸� ���� ---------------------------------	 �ذ�
*/

namespace khu {

	char* gString = nullptr;

	const char* Construct(const char* str)
	{
		unsigned int length = 0;
		for (; str[length] != '\0'; ++length);
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
		char* p_gstr = gString;
		while (*p_gstr != '\0')
		{
			length++;
			p_gstr++;
		}
		return length;
	}

	void Append(const char* str)
	{
		unsigned int length = 0;
		unsigned int new_length = 0;
		char* appendedString = nullptr;

		for (; str[new_length]; ++new_length);
		for (length = 0; gString[length] != '\0'; ++length);

		appendedString = new char[new_length + length + 1];

		for (unsigned int i = 0; i < length; ++i)
		{
			appendedString[i] = gString[i];
		}

		for (unsigned int i = 0; i < new_length; ++i)
		{
			appendedString[i + length] = str[i];
		}

		appendedString[new_length + length] = '\0';
		delete[] gString;
		gString = appendedString;

	}

	bool RemoveAt(unsigned int i)
	{
		unsigned int length = 0;
		for (; gString[length] != '\0'; ++length);

		if (length < i)
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
		unsigned int length = 0;
		for (; gString[length] != '\0'; ++length);

		for (int i = 0; (length - 1) / 2 >= i; ++i)
		{	
			char temp = gString[length - 1 - i];
			gString[length - 1 - i] = gString[i];
			gString[i] = temp;
		}
	}

	void ToUpper()
	{
		unsigned int length = 0;
		char* upperString = nullptr;

		for (; gString[length] != '\0'; ++length);
		upperString = new char[length + 1];

		for (int i = 0; i < length; ++i)
		{
			if (gString[i] >= 'a' && gString[i] <= 'z') 
			{
				upperString[i] = gString[i] - ' ';
			}
			else
			{
				upperString[i] = gString[i];
			}
		}
		upperString[length] = '\0';
		delete[] gString;
		gString = upperString;
	}

	void ToLower()
	{
		unsigned int length = 0;
		char* lowerString = nullptr;

		for (; gString[length] != '\0'; ++length);
		lowerString = new char[length + 1];

		for (int i = 0; i < length; ++i)
		{
			if (gString[i] >= 'A' && gString[i] <= 'Z')
			{
				lowerString[i] = gString[i] + ' ';
			}
			else
			{
				lowerString[i] = gString[i];
			}
		}
		lowerString[length] = '\0';
		delete[] gString;
		gString = lowerString;
	}

	const char* Copy(const char* str)
	{
		if (str == gString)
		{
			return gString;
		}
		else
		{
			unsigned int length = 0;
			char* copiedString = nullptr;

			for (; str[length] != '\0'; ++length);
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
#pragma once

/*
IClient Ŭ���� ����

IClient�� ������ ������ �Ϲ� ������ �����ϴ� �������̽�(�߻� Ŭ����)�̴�. 
������ ������ �Ϲ� �������� �������� ����� ��� ����, ��� �Լ��� 
�� �����ؼ� �����ϵ��� ����.
��, �������̽��̹Ƿ� ��� �Լ����� ���� �����Լ������Ѵ�. ��, ���� �������� �ʴ´�.

*/

// ���̵�, �н�����

class IClient 
{
public:
	IClient();
	virtual ~IClient() = 0;

	virtual void AddItemToCart() = 0;
	virtual void PurchaseItems() = 0;                                                
};

IClient::IClient() {}
IClient::~IClient() {}



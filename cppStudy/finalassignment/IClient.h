#pragma once

/*
IClient Ŭ���� ����

IClient�� ������ ������ �Ϲ� ������ �����ϴ� �������̽�(�߻� Ŭ����)�̴�. 
������ ������ �Ϲ� �������� �������� ����� ��� ����, ��� �Լ��� 
�� �����ؼ� �����ϵ��� ����.
��, �������̽��̹Ƿ� ��� �Լ����� ���� �����Լ������Ѵ�. ��, ���� �������� �ʴ´�.

*/

// ���̵�, �н�����

class IClient {
private:
	std::string userId;
	std::string userPassword;
public:
	IClient(std::string id, std::string password) : userId(id), userPassword(password) {}
	virtual ~IClient() {} // ���� �Ҹ���
};
#pragma once
/*
ClientDatabase Ŭ���� ����

������ �ϳ��� �����Ѵ�
������ �� �ݵ�� ���� ������ �Բ� ������ �ȴ�
�����ϴ� ��� ���� ������ �߰�/����/���� ������ ����Ѵ�
���� ���� �ʱ� ���� ������ ������ ��� ������ ClientDatabase�θ� ����/������ �� �ִ�.
*/

class ClientDatabase 
{
public:
	ClientDatabase(AdminClient admin);
	~ClientDatabase();
private:
	static int mNum;

};

int ClientDatabase::mNum = 0;

ClientDatabase::ClientDatabase(AdminClient admin) 
{
	++mNum;
}

ClientDatabase::~ClientDatabase() {}
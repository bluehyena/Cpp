#pragma once

/*
AdminClient Ŭ���� ����

������ �ϳ��� �����Ѵ�
AdminClient�� ItemDatabase�� �������� �߰�/������ ������ ���´�
AdminClient�� ClientDatabase�� ������ ������ ������ �������� �߰�/������ ������ ���´�
AdminClient�� ��ٱ��Ͽ� ��ǰ�� �߰��� �� �ִ�.
AdminClient�� ��ǰ ���� �� ������ 0������ å���� �ȴ�.
*/

// friend class ���� �� ��

class AdminClient : public IClient 
{
public:
	AdminClient(std::string _mUserId, std::string _mUserPassword);
	~AdminClient();
	AdminClient* GetInstance(std::string _mUserId, std::string _mUserPassword);

private:
	static int num;
	std::string mUserId;
	std::string mUserPassword;

};

int AdminClient::num = 0;

AdminClient::AdminClient(std::string _mUserId, std::string _mUserPassword) {
	this->mUserId = _mUserId;
	this->mUserPassword = _mUserPassword;
	++num;
}

AdminClient::~AdminClient() 
{
	std::cout << "admin ������ �����߽��ϴ�." << '\n';
}

AdminClient* AdminClient::GetInstance(std::string _mUserId, std::string _mUserPassword) 
{
	AdminClient* admin;
	if (this->num == 0) 
	{
		admin = &AdminClient(_mUserId, _mUserPassword);
		return admin;
	}
	else 
	{
		std::cout << "�̹� admin ������ �����մϴ�." << '\n';
	}
}
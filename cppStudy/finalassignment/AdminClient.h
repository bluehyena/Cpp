#pragma once

/*
AdminClient 클래스 구현

오로지 하나만 존재한다
AdminClient는 ItemDatabase에 아이템을 추가/삭제할 권한을 갖는다
AdminClient는 ClientDatabase에 관리자 계정을 제외한 계정들을 추가/삭제할 권한을 갖는다
AdminClient는 장바구니에 제품을 추가할 수 있다.
AdminClient는 제품 구매 시 가격은 0원으로 책정이 된다.
*/

// friend class 쓰면 될 듯

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
	std::cout << "admin 계정을 삭제했습니다." << '\n';
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
		std::cout << "이미 admin 계정이 존재합니다." << '\n';
	}
}
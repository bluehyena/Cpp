#pragma once

/*
IClient 클래스 구현

IClient는 관리자 계정과 일반 계정을 포괄하는 인터페이스(추상 클래스)이다. 
관리자 계정과 일반 계정에서 공동으로 사용할 멤버 변수, 멤버 함수를 
잘 생각해서 선언하도록 하자.
단, 인터페이스이므로 멤버 함수들은 전부 가상함수여야한다. 즉, 절대 구현하지 않는다.

*/

// 아이디, 패스워드

class IClient {
private:
	std::string userId;
	std::string userPassword;
public:
	IClient(std::string id, std::string password) : userId(id), userPassword(password) {}
	virtual ~IClient() {} // 가상 소멸자
};
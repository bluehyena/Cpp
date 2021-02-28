#pragma once
/*
Card 클래스 구현

Card는 현재 금액을 반환하는 함수가 필요하다 ㅇ
Card는 일부 금액을 인출하는 함수가 필요하다 ㅇ
Card는 일부 금액을 입금하는 함수가 필요하다 ㅇ
기타 필요하다고 생각하는 함수는 직접 구현하도록 한다
*/

class Card 
{
public:
	Card(std::string _mCardName);
	Card(std::string _mCardName, int _mBalance);
	~Card();
	int GetBalance();
	void WithDrawal(int money);
	void Deposit(int money);

private:
	int mBalance;
	std::string mCardName;
};

Card::Card(std::string _mCardName)
{
	this->mCardName = _mCardName;
	this->mBalance = 0;
}

Card::Card(std::string _mCardName, int _mBalance) 
{
	this->mCardName = _mCardName;
	this->mBalance = _mBalance;
}

// 소멸자 확인
Card:: ~Card() 
{
	std::cout << "카드 삭제" << '\n';
}

int Card::GetBalance() 
{
	return this->mBalance;
}

void Card::WithDrawal(int money)
{
	if (money > this->mBalance)
	{
		std::cout << "인출할 잔액이 부족합니다. 현재 잔액은 " << this->mBalance << " 원 입니다." << '\n';
	}
	else 
	{
		this->mBalance -= money;
	}
}

void Card::Deposit(int money)
{
	this->mBalance += money;
}
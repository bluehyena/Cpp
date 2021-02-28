#pragma once
/*
Card Ŭ���� ����

Card�� ���� �ݾ��� ��ȯ�ϴ� �Լ��� �ʿ��ϴ� ��
Card�� �Ϻ� �ݾ��� �����ϴ� �Լ��� �ʿ��ϴ� ��
Card�� �Ϻ� �ݾ��� �Ա��ϴ� �Լ��� �ʿ��ϴ� ��
��Ÿ �ʿ��ϴٰ� �����ϴ� �Լ��� ���� �����ϵ��� �Ѵ�
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

// �Ҹ��� Ȯ��
Card:: ~Card() 
{
	std::cout << "ī�� ����" << '\n';
}

int Card::GetBalance() 
{
	return this->mBalance;
}

void Card::WithDrawal(int money)
{
	if (money > this->mBalance)
	{
		std::cout << "������ �ܾ��� �����մϴ�. ���� �ܾ��� " << this->mBalance << " �� �Դϴ�." << '\n';
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
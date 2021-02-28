#pragma once
/*
Item Ŭ���� ����

��ǰ�� ���� ������ ���´�
*/

class Item 
{
public:
	Item(std::string _mItemName, std::string _mItemId, int _mItemPrice);
	~Item();
	std::string getItemName();
	int getItemPrice();

private:
	std::string mItemName;
	int mItemPrice;
	std::string mItemId;
};

Item::Item(std::string _mItemName, std::string _mItemId, int _mItemPrice)
{
	this->mItemName = _mItemName;
	this->mItemId = _mItemId;
	this->mItemPrice = _mItemPrice;
}
// �Ҹ� Ȯ��
Item::~Item() 
{
	std::cout << "�������� ���� �߽��ϴ�." << '\n';
}

std::string Item::getItemName()
{
	return this->mItemName;
}

int Item::getItemPrice()
{
	return this->mItemPrice;
}
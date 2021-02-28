#pragma once
/*
Item 클래스 구현

제품에 대한 정보를 갖는다
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
// 소멸 확인
Item::~Item() 
{
	std::cout << "아이템을 삭제 했습니다." << '\n';
}

std::string Item::getItemName()
{
	return this->mItemName;
}

int Item::getItemPrice()
{
	return this->mItemPrice;
}
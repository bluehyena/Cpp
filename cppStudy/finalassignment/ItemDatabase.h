#pragma once
/*
ItemDatabase 클래스 구현

오로지 하나만 존재한다
존재하는 모든 제품의 추가/삭제/수명 관리를 담당한다
모든 제품은 ItemDatabase로만 생성/삭제될 수 있다

*/

class ItemDatabase 
{
public:
	ItemDatabase();
	~ItemDatabase();
	void AddItems(Item items);
	void PrintItems();
	Item GetItemById(std::string itemId);
	ItemDatabase* GetInstance(AdminClient* admin);
private:
	static int mNum;
};

ItemDatabase::ItemDatabase()
{
	++mNum;
}
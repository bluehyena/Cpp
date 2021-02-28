#pragma once
/*
ItemDatabase Ŭ���� ����

������ �ϳ��� �����Ѵ�
�����ϴ� ��� ��ǰ�� �߰�/����/���� ������ ����Ѵ�
��� ��ǰ�� ItemDatabase�θ� ����/������ �� �ִ�

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
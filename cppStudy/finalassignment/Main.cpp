// Main.cpp
/*
문제 규칙

클래스 간의 형변환을 일체 금한다
STL의 사용은 컨테이너와 스트링에 한한다. (vector, stack 등)
기타 코딩 규칙 참고: Cpp Coding Standard · SWTube/Darkest-Cave Wiki (github.com)
*/
#include <cassert>
#include <iostream>
#include <vector>

#include "AdminClient.h"
#include "Card.h"
#include "Cart.h"
#include "ClientDatabase.h"
#include "IClient.h"
#include "Item.h"
#include "ItemDatabase.h"
#include "UserClient.h"

int main()
{
    AdminClient* admin = AdminClient::GetInstance("admin", "q1w2e3r4");
    ClientDatabase* clientDb = ClientDatabase::GetInstance(admin);
    ItemDatabase* itemDb = ItemDatabase::GetInstance(admin);

    UserClient* user0 = new UserClient("oop_veryhard", "1234" /*, 더 필요하면 직접 구현 */);
    UserClient* user1 = new UserClient("hyuhak_pls", "2345" /*, 더 필요하면 직접 구현 */);
    std::vector<UserClient*> users;
    users.reserve(2);
    users.push_back(user0);
    users.push_back(user1);
    clientDb.AddUsers(users);

    UserClient* user2 = new UserClient("winter_vacation", "3456" /*, 더 필요하면 직접 구현 */);
    clientDb.AddUser(user2);

    Item* item0 = new Item( /* 직접 구현 */);
    Item* item1 = new Item( /* 직접 구현 */);
    std::vector<Item*> items;
    items.reserve(2);
    items.push_back(item0);
    items.push_back(item1);

    itemDb.AddItems(items);

    Item* item2 = new Item( /* 직접 구현 */);
    itemDb.AddItem(item2);

    itemDb.PrintItems();

    user0.AddItemToCart(itemDb[0]);
    user0.AddItemToCart(itemDb.GetItemById("0001"));

    Card* card = new Card( /* 직접 구현 */);
    user0.SetCard(card);

    eResultType result = user0.PurchaseItems();

    switch (result)
    {
    case eResultType::PurchaseSuccess:
        std::cout << "Purchase Successful!! Current Balance: " << card.GetBalance() << std::endl;
        break;
    case eResultType::PurchaseFailedInsufficientBalance:
        std::cout << "Purchase Failed!! $" << cart.GetPrice() << " needed but only $" << card.GetBalance() << " in balance." << std::endl;
        break;
    case eResultType::PurchaseFailedNoItem:
        std::cout << "Purchase Failed!! Check your items again. Some of them are already sold!" << std::endl;
        break;
    default:
        assert(false);
        break;
    }

    if (result == eResultType::PurchaseSuccess)
    {
        eResultType refundResult = user0.GetRefund();
        switch (refundResult)
        {
        case eResultType::RefundSuccess: //
            std::cout << "You have successfully refunded." << std::endl;
            break;
        case eResultType::RefundFailedNoRefundAvailable:
            std::cout << "You have nothing to refund." << std::endl;
            break;
        default:
            assert(false);
            break;
        }
    }

    return 0;
}
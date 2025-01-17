#pragma once
/*
Cart 클래스 구현

유저 당 하나의 장바구니가 존재한다
장바구니는 제품을 담을 수 있다
장바구니는 결제를 담당한다. 유저의 결제 수단 유무, 결제 수단의 금액 유무, 결제 순간에 ItemDatabase에 해당 제품이 존재하는지 여부 등을 잘 판단해서 결제 승인 / 거부를 하도록 하자.
결제가 승인될 시 ItemDatabase에서 해당 아이템들을 삭제해야한다.
유저가 환불 신청을 할 시 제품들을 다시 ItemDatabase에 등록해주고 결제 수단에 해당 금액을 환불해주어야 한다.
현재 카트에 있는 아이템들이 데이터베이스에 존재하는지 판별하는 함수를 제작하라
*/

//friend class

class Cart 
{
public:

};
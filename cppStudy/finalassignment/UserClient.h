#pragma once
/*
UserClient 클래스 구현

UserClient는 장바구니에 제품을 추가할 수 있다
UserClient는 장바구니에 추가한 제품들을 구매할 수 있으나, 이전에 반드시 결제 수단을 등록해야한다. 결제 수단은 현재 신용 카드만 지원한다.
결제 수단 등록은 계좌 생성 시에도 가능하나, 생성 시 등록하지 않을 경우 나중에 등록을 할 수 있다.
UserClient는 가장 최근 구매한 장바구니 이력에 대해 환불이 가능하다
*/

class UserClient : public IClient 
{
public:

private:
	
};
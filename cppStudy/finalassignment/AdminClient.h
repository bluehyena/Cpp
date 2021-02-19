#pragma once

/*
AdminClient 클래스 구현

오로지 하나만 존재한다
AdminClient는 ItemDatabase에 아이템을 추가/삭제할 권한을 갖는다
AdminClient는 ClientDatabase에 관리자 계정을 제외한 계정들을 추가/삭제할 권한을 갖는다
AdminClient는 장바구니에 제품을 추가할 수 있다.
AdminClient는 제품 구매 시 가격은 0원으로 책정이 된다.
*/
class AdminClient : public IClient {
public:
	AdminClient();
};
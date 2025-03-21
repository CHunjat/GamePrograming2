#include <stdio.h>
#include "player.h"

/*
* 작성일 : 2025.3.21.
* 작성자 :나 
* 주제 : 구조체로 게임 만들기
*/

/*
* 포인터 주소를 이용할 수있게 되었다.
* 1. 포인터 변수 선언하는 법				int* numptr;
  2. 변수로 부터 주소를 호출하는 법		int num; &num;
  3. 주소에서 값을 참조하는 법			*numptr;
*/

/*
* 
* 포인터와 연산자
* 포인터의 덧셈결과 : 자료형의 크기만큼 증가. int -> 4증가
* 배열             : 포인터 주소 + i) i번째 주소를 호출하는 것
*/

/*
* 구조체 : 사용자 정의 자료형
*/

/*
* 게임에 사용할 함수 구현
* player - item - enermy
*
*/

/*
* 기능
* 1. 이동구현
* 2. 상호작용 구현
* 
*/


 int main()
{
	 COORD PlayerPos = { 0,0 };
	 Player Player = { "모험가", PlayerPos };    // 이름, 좌표
	 
	 COORD itemAPos = { 5,5 };
	 Item itemA = { "아이템A", itemAPos, false}; // 이름과 좌표와 획득여부
	 //printf("플레이어 이름 : %s", Player.PlayerName);
	 COORD itemPos = { 10,10 };
	 Item itemB = { "아이템B", itemPos, false };

	 Item GameItems[2] = { &itemA, &itemB }; // item배열을 가져와서 사용하는 함수 구현하기!


	 while (true)
	 {
		 //system("cls");
		 GetPlayerInput(&Player);
		 ShowPlayer(&Player);

		 GotoCOORD(itemAPos);
		 printf("※");

		 InteractwithItem(&Player, &itemA); // 주소에 데이터가 변경되지 않았다. -> 값 참조(원인예상) call by value, ref
		 ShowPlayerItemInfo(&itemA);
		 //ShowPlayerAllItemInfo(&GameItems, 2);

		 //배열을 매개변수로 받아와서 각각의 데이터에 접근한다.
		 Sleep(100);
	 }
}

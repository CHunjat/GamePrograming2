#include "item.h"
#define ITEMALLCOUNT 3

void ShowALLitemInfo()
{
	int itemCount[5] = { 1,2,3,4,5 };
	int itemIndexs[5] = { 1,2,3,4,5 };
	char* itemName[5] = { "AAA","BBB","CCC","DDD","EEE" };
	printf("모든 아이템을 열람한다.\n");

	for (int i = 0; i < 5; i++)
	{
		printf("아이템 번호 :%d, 아이템 이름 :%s, 아이템 수량 :%d\n", itemIndexs[i], itemName[i], itemCount[i]);
	}
}


//아이템의 이름 배열과 포인터를 사용해서 출력해보세요
// const 포인터 (상수포인터)
// 
// 아이템 설명 - 문자열
// 아이템 이름 - 문자열
// 1번 인덱스에 있는 아이템의 이름과 설명을 출력하는 기능구현

void ItemExample()
{
	//배열타입으로 이름 선언하기 //포인터 타입으로 이름 선언하기
	
	char 표창이름[9] = "수비표창";
	char* 표창이름포인터 = "수비표창2";
	char* 표창이름포인터2[30] = { "수","비","표","창" };

	printf("\n\n");
	printf("표창이름 : %s\n, 표창이름 포인터 : %s\n", 표창이름, 표창이름포인터);
	printf("%s", 표창이름포인터2[0]);
	printf("%s", 표창이름포인터2[1]);
	printf("%s", 표창이름포인터2[2]);
	printf("%s", 표창이름포인터2[3]);
	
}

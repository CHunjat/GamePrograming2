#include "2DimensionArray.h"
#include "stage.h"
#include "item.h"



int main()
{
	//ShowLecture();
	STAGE stage1; // 이녀석 안에는 스테이지라는 구조체가 있고, 여러가지 타입 이며 stage1 빈 상자 이름 변수임!
	Stage12(&stage1, 1);
	STAGE stage2; // 이녀석 안에는 스테이지라는 구조체가 있고, 여러가지 타입 이며 stage1 빈 상자 이름 변수임!
	Stage12(&stage2, 2);

	printf("스테이지 이름 출력 : %s\n", stage1.NAME);
	printf("스테이지 1의 맵 출력 : \n");
	for (int i = 0; i < STAGE_COL; i++)
	{
		printf("%s\n", stage1.map[i]);
	}
	printf("스테이지 이름 출력 : %s\n", stage2.NAME);

	printf("스테이지 2의 맵 출력 : \n");
	for (int i = 0; i < STAGE_COL; i++)
	{
		printf("%s\n", stage2.map[i]);
	}
	 
	ITEM DeathItem;
	ItemName(&DeathItem, 1);

	printf("죽음의 아이템 출력 : %s\n", DeathItem.ITEMNAME);
	for (int i = 0; i < Item_COL; i++);
	{
		printf("%s\n", DeathItem.item);
	}
}
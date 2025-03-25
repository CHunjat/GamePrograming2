#pragma once
#include <stdio.h>
#define Item_COL 5
#define Item_ROW 5
// 아이템 구조체
// 1. 아이템 이름
// 2. 아이템 스탯 (공격력. 가격, 내구도,)
// 3. 2차원 배열

typedef struct _ITEM
{
	char* ITEMNAME;
	char (*item)[Item_ROW + 1];


	// 2차원 배열을 저장할 수있는 타입선언
}ITEM;

void ItemName(ITEM* item, int index);
/*
* 목표 : 상점 기능을 구현한다!
* 
* 1. 상점을 데이터로 정의하세요. 아이템을 복수 개 판다.
* 2. 아이템을 정의하세요. 배열로 접근 할 수 있게 해야한다. 
*/

/* 1. 2차원 배열 - void 함수 이름(char(*map)[길이 +1])
*  2. 파일 저장 로드 시스템을 게임에 적용해 볼 것(구조체, 함수,포인터)
*  3. 만들고 싶은 기능 정하기, 어떻게 구현해야할지 잘 모르겠다면 질문
*/

/*
* 
* 재화시스템과 인벤토리 연동 아이템구매까지의 기능
* 1. 상점 및 , 인벤토리 꾸미기, 구현
* 2. 재화 시스템 
* 3. 구매 인벤토리 확인 
*/



#define NameLength 20

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <conio.h>

typedef struct
{
	char name[NameLength];
	int price;
}Item;

void AddShopData(Item shop[], int* shopcount, const char* name, int price)
{

	strncpy(shop[*shopcount].name,name, NameLength);
	shop[*shopcount].price = price;
	(*shopcount)++;
}

void ShowShopTable(Item shop[], int count)
{
	
	printf("+------+------+------------------+\n");
	printf("| 순서 | 가격 |       이름       |\n");
	printf("+------+------+------------------+\n");

	for (int i = 0; i < count; i++)
	{
		printf("| %4d | %4d | %-16s |\n", i + 1, shop[i].price, shop[i].name);
	}

	//테두리 만든다
	printf("+------+------+------------------+\n");
	_getch();

}

void ShowIventoryTable(Item inventory[], int count)
{
	printf("유저의 인벤토리\n");
	printf("+------+------+------------------+\n");
	printf("| 순서 | 가격 |       이름       |\n");
	printf("+------+------+------------------+\n");

	for (int i = 0; i < count; i++)
	{
		printf("| %4d | %4d | %-16s |\n", i + 1, inventory[i].price, inventory[i].name);
	}

	//테두리 만든다
	printf("+------+------+------------------+\n");
	_getch();

}

void BuyItem(Item item, Item inventory[], int* count) // Item : 상점에 있는 구매할 아이템, inventory는 플레이어가 저장할거, 인벤토리의 저장위치
{
	inventory[*count].price = item.price;
	strncpy(inventory[*count].name, item.name, NameLength);
	(*count)++;
}

void ShopPhase(Item shop[], Item inventory[], int count, int* inventorycount, bool* gameQuit)
{
	printf("상점에 진입했습니다.\n");

	while (true)
	{
		printf("1_상점 목록을 확인한다. 2_아이템 구입. 3_상점을 떠난다 4_게임을 종료\n");
		int input = 0;
		scanf("%d", &input);
		int itemIndex = 0;

		switch (input)
		{
		case 1: ShowShopTable(shop, count); break;
		case 2: printf("구입할 아이템 번호를 입력해주세요\n");
			scanf("%d", &itemIndex);
			BuyItem(shop[itemIndex - 1], inventory, inventorycount);
			break;
		case 3: return;
		case 4: *gameQuit = true; return;
		}
	}
}




int main()
{
	Item Shop[10]; //판매할 수있는 갯수지정 배열로
	int shopCount = 0;
	Item Inventory[10];
	int inventoryCount = 0;

	AddShopData(Shop, &shopCount,"롱소드",100);
	AddShopData(Shop, &shopCount, "나무방패", 90);
	AddShopData(Shop, &shopCount, "냄비뚜껑", 190);
	AddShopData(Shop, &shopCount, "고목스태프", 105);


	bool gameQuit = false; // gameQuit, "true" 가 되면 게임종료

	while (1)
	{
		ShopPhase(Shop,Inventory, shopCount, &inventoryCount, &gameQuit);
		ShowIventoryTable(Inventory, inventoryCount);
		if (gameQuit)
		{
			break;
		}
	}
	
	printf("게임이 종료되었습니다\n");

}
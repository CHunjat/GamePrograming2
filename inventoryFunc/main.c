
#define NameLength 20
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include <string.h>

typedef struct
{
	char name[NameLength];
	int price;
}Item;

void AddShopData(Item shop[], int* shopcount, const char* name, int price)
{
	strncpy(shop[*shopcount].name, name, NameLength);
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
	printf("+------+------+------------------+\n");
	_getch();
}

bool BuyItem(Item item, Item inventory[], int* count, int* gold)
{
	if (*gold >= item.price)
	{
		inventory[*count].price = item.price;
		strncpy(inventory[*count].name, item.name, NameLength);
		(*count)++;
		*gold -= item.price; 
		printf("%s를 구입했습니다! 남은 골드: %d\n", item.name, *gold);
	}
	else
	{
		printf("골드가 부족하여 %s를 구입할 수 없습니다. (보유 골드: %d)\n", item.name, *gold);
		return false;
	}
	_getch();
	return;
}

void ShopPhase(Item shop[], Item inventory[], int count, int* inventorycount, bool* gameQuit, int* gold)
{
	printf("상점에 진입했습니다. (보유 골드: %d)\n", *gold);

	while (true)
	{
		printf("1_상점 목록을 확인한다. 2_아이템 구입. 3_상점을 떠난다. 4_게임을 종료\n");
		int input = 0;
		scanf("%d", &input);
		int itemIndex = 0;

		switch (input)
		{
		case 1:
			ShowShopTable(shop, count);
			break;
		case 2:
			printf("구입할 아이템 번호를 입력해주세요\n");
			scanf("%d", &itemIndex);
			if (itemIndex >= 1 && itemIndex <= count)
			{
				BuyItem(shop[itemIndex - 1], inventory, inventorycount, gold);
			}
			else
			{
				printf("잘못된 번호입니다.\n");
			}
			break;
		case 3:
			return;
		case 4:
			*gameQuit = true;
			return;
		default:
			printf("잘못된 입력입니다.\n");
		}
	}
}

int main()
{
	Item Shop[10];
	int shopCount = 0;
	Item Inventory[10];
	int inventoryCount = 0;

	int playerGold = 200; // 💰 초기 보유 골드

	AddShopData(Shop, &shopCount, "롱소드", 100);
	AddShopData(Shop, &shopCount, "나무방패", 90);
	AddShopData(Shop, &shopCount, "냄비뚜껑", 190);
	AddShopData(Shop, &shopCount, "고목스태프", 105);

	bool gameQuit = false;

	while (1)
	{
		ShopPhase(Shop, Inventory, shopCount, &inventoryCount, &gameQuit, &playerGold);
		ShowIventoryTable(Inventory, inventoryCount);
		if (gameQuit)
		{
			break;
		}
	}

	printf("게임이 종료되었습니다\n");

	return 0;
}


#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#define NameLength 20
#define _CRT_SECURE_NO_WARNINGS

typedef struct _Shop
{
	char name[NameLength];
	int price;

}Shop;

typedef struct _Inventory
{
	char name[ NameLength ];
	int count;
}Inven;

void Inventory(Inven list[], int count)
{
	printf("==========유저의 인벤토리=========\n");
	printf("+------+------+------------------+\n");
	printf("| 순서 | 갯수 |       이름       |\n");
	printf("+------+------+------------------+\n");

	for (int i = 0; i < count; i++)
	{
		printf("| %4d | %4d | %-16s |\n", i + 1, list[i].count, list [i] .name);
	}

	printf("+------+------+------------------+\n");
	_getch();
}

void shopTable(Shop item[], int price)
{
	printf("==========   상점 목록   =========\n");
	printf("+------+------+------------------+\n");
	printf("| 순서 | 가격 |       이름       |\n");
	printf("+------+------+------------------+\n");

	for (int i = 0; i < price; i++)
	{
		printf("| %4d | %4d | %-16s |\n", i + 1, item[i].price, item[i].name);
	}

	printf("+------+------+------------------+\n");
	_getch();

}

void ShowBuyList(Shop item[], Inven list[], int price, int*inventorycount, bool* gameQuit)


int main()
{



}
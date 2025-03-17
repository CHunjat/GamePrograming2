#include "Inventory.h"


int* InventoryPtr;

void ShowInventoryCount(int* Inventory)
{

	if (Inventory == NULL)
	{
		printf("인벤토리의 주소가 할당되어있찌 않습니다 \n");
	}
	else
	{
		printf("현재 인벤토리의 최대 수 : %d\n", *Inventory);

	}
}

void IncreaseInventoryCount(int* Inventory, int increaseCount)
{
	*Inventory += increaseCount;
}

void InventoryExample()
{
	InventoryPtr = malloc(sizeof(int));
	*InventoryPtr = 0;

	ShowInventoryCount(InventoryPtr);

	free(InventoryPtr);
}

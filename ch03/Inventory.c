#include "Inventory.h"


int* InventoryPtr;

void ShowInventoryCount(int* Inventory)
{

	if (Inventory == NULL)
	{
		printf("�κ��丮�� �ּҰ� �Ҵ�Ǿ����� �ʽ��ϴ� \n");
	}
	else
	{
		printf("���� �κ��丮�� �ִ� �� : %d\n", *Inventory);

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

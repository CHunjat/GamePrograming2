#include "player.h"

void GetPlayerInput(Player* PlayerPtr)
{
	if (_kbhit())
	{
		if(GetAsyncKeyState(VK_LEFT))
		{
			//Player�� pos���� x���� �����Ѵ�
			PlayerPtr->Pos.X -= 1;

		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			PlayerPtr->Pos.X += 1;

		}
		else if (GetAsyncKeyState(VK_UP))
		{
			PlayerPtr->Pos.Y -= 1;

		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			PlayerPtr->Pos.Y += 1;

		}
	}
}


//window.h 
void ShowPlayer(const Player* PlayerPtr)
{
	//X,Y ��ǥ�� �̵��ؼ� printf �� �Ѵ�.
	GotoCOORD(PlayerPtr->Pos);
	printf("��");
}

void InteractwithItem(Player* PlayerPtr, Item* itemPtr)
{
	
	//player, item ��ǥ ������ x,y ��ǥ�� ���ؼ� ����ǥ�� ������ Item�ȿ� �ִ� hasItem True�� �������ִ� �ڵ带 �ۼ�

	// 2. item �ּҷκ��� ��ǥ�� ����������! ItemPtr->Pos

	if (ComPareCOORD(PlayerPtr->Pos, itemPtr->Pos))	// 1. Player�ּҷκ��� ��ǥ�� ����������! PlayerPtr->Pos
	{
		
		itemPtr->hasItem = true;


	}

}

void ShowPlayerItemInfo(Item* itemPtr)
{
	// ��� �������� Ž���ؼ� HasItemTrue�� �༮�鸸 ������ ������
	if (itemPtr->hasItem)
	{
		printf("%s ��������ȹ���߽��ϴ�. \n", itemPtr->itemName);

	}
}

void ShowPlayerAllItemInfo(Item* itemArray, int length)
{
	for (int i = 0; i < length; i++)
	{
		  //(itemArray +i) // �迭�� ���� �ּҿ���  
		
		if ((itemArray+i))->hasItem == true)
		{
			printf("%s �������� ���� �߽��ϴ�. \n", (itemArray+i)->itemName);

	    }
		else
		{
			printf("%s �������� �̺��� �߽��ϴ�. \n", (itemArray + i)->itemName);

		}
	}
}

void GotoXY(int PosX, int PosY)
{
	COORD Pos = { PosX,PosY };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void GotoCOORD(COORD Pos)
{
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);

}

BOOL ComPareCOORD(COORD Pos1, COORD Pos2)
{
	// Pos1.X Pos2.X      -if >
	// Pos1.Y Pos2.Y ��  -if >
	//�Ѵ� ������ true     - &&
	// �ƴϸ� false ��ȯ - return ture, false

	if (Pos1.X == Pos2.X && Pos1.Y == Pos2.Y)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}




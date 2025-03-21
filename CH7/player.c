#include "player.h"

void GetPlayerInput(Player* PlayerPtr)
{
	if (_kbhit())
	{
		if(GetAsyncKeyState(VK_LEFT))
		{
			//Player의 pos값의 x값을 변경한다
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
	//X,Y 좌표로 이동해서 printf 를 한다.
	GotoCOORD(PlayerPtr->Pos);
	printf("★");
}

void InteractwithItem(Player* PlayerPtr, Item* itemPtr)
{
	
	//player, item 좌표 각각의 x,y 좌표랑 비교해서 두좌표가 같으면 Item안에 있는 hasItem True로 변경해주는 코드를 작성

	// 2. item 주소로부터 좌표를 가져오세요! ItemPtr->Pos

	if (ComPareCOORD(PlayerPtr->Pos, itemPtr->Pos))	// 1. Player주소로부터 좌표를 가져오세요! PlayerPtr->Pos
	{
		
		itemPtr->hasItem = true;


	}

}

void ShowPlayerItemInfo(Item* itemPtr)
{
	// 모든 아이템을 탐색해서 HasItemTrue인 녀석들만 정보를 보여줘
	if (itemPtr->hasItem)
	{
		printf("%s 아이템을획득했습니다. \n", itemPtr->itemName);

	}
}

void ShowPlayerAllItemInfo(Item* itemArray, int length)
{
	for (int i = 0; i < length; i++)
	{
		  //(itemArray +i) // 배열의 시작 주소에서  
		
		if ((itemArray+i))->hasItem == true)
		{
			printf("%s 아이템을 보유 했습니다. \n", (itemArray+i)->itemName);

	    }
		else
		{
			printf("%s 아이템을 미보유 했습니다. \n", (itemArray + i)->itemName);

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
	// Pos1.Y Pos2.Y 비교  -if >
	//둘다 같으면 true     - &&
	// 아니면 false 반환 - return ture, false

	if (Pos1.X == Pos2.X && Pos1.Y == Pos2.Y)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}




#include "player.h"

void GetPlayerName(Player player)
{
	printf("%s", player.name);
}

void SetPlayerName(Player* playerPtr)
{
	char* inputName = malloc(sizeof(inputName));
	scanf_s("%s", inputName, 10); // a

	(*playerPtr).name = inputName; // <-주소의 포인터 역참조, 역참조해서 네임을 받아겠다는 뜻.

}

void SetPlayerInput(Player* playerPtr)
{
	// 플레이어의 입력을 판별한다 4방향 return
	// 방향 enum 0 : 왼 , 1:오 ,  2:위,  3: 아래
	// enum 값

	if (_kbhit)
	{
		if (GetAsyncKeyState(VK_LEFT))
		{
			(*playerPtr).pos.X -= 1;
		}
		else if ((GetAsyncKeyState(VK_RIGHT)))
		{
			(*playerPtr).pos.X += 1;

		}
		else if ((GetAsyncKeyState(VK_UP)))
		{
			(*playerPtr).pos.Y -= 1;

		}
		else if ((GetAsyncKeyState(VK_DOWN)))
		{
			(*playerPtr).pos.Y += 1;
		}

	}
}

void SelectColor(COLOR color)
{
	switch (color)
	{
	case RED:
		printf("RED입니다\n");
		break;
	case GREEN:
		printf("green입니다\n");
		break;	
	case BLUE:
		printf("blue입니다\n");
		break;
			
	}
	

}

void ShowPlayerinfo(Player* PlayerPtr)
{
	//이름, 좌표, 종족
	if (PlayerPtr == NULL) //  예외처리
	{
		return;
	}

	printf("%s", PlayerPtr->name);
	//GetPlayerName(*PlayerPtr);
	//GetPlayerPos(*PlayerPtr);
	//GetPlayerRace(*PlayerPtr);
}

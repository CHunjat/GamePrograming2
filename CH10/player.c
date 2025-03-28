#include "player.h"

void GetPlayerName(Player player)
{
	printf("%s", player.name);
}

void SetPlayerName(Player* playerPtr)
{
	printf("플레이어의 이름을 정해주세요\n");
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

void SetPlayerRace(Player* playerPtr)
{
	printf("종족을 선택해주세요\n");
	printf("1_Human 2_ORC 3_TROLL\n");
	int inputNumber = -1;
	scanf_s(" %d", &inputNumber);

	switch (inputNumber)
	{
	case 1 : 
		playerPtr->race = HUMAN;
		return;
	case 2 : 
		playerPtr->race = ORC;

		return;
	case 3:
		playerPtr->race = TROLL;

		return;
	default:
		SetPlayerRace(playerPtr);
	}

}

void SetPlayer(Player* playerPtr)
{
	SetPlayerName(playerPtr);
	SetPlayerRace(playerPtr);

	printf("플레이어 설정이 완료 되었습니다. 진행하려면 아무 버튼이나 입력해주세요\n");
	_getch();
	system("cls");
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

void ShowPlayerinfo(Player* PlayerPtr, COORD uiPos)
{
	GoToXY(uiPos.X, uiPos.Y);
	printf("플레이어의 정보");
	GoToXY(uiPos.X, uiPos.Y +1 );
	printf("플레이어의 이름 : %s", PlayerPtr->name);
	GoToXY(uiPos.X, uiPos.Y +2 );
	printf("좌표 : [%d,%d]", PlayerPtr->pos.X, PlayerPtr->pos.Y);
	GoToXY(uiPos.X, uiPos.Y + 3 );
	printf("종족에 해당하는 숫자 출력(1:HUMAN 2:ORC 3:TROLL)%d", PlayerPtr->race);


}

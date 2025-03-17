#include "Input.h"

/*
* while(1)
* {
*  if(_kbhit){if(GetKeyState....)} 
* }
*/
void GetPlayerInput(int* playerX, int* playerY, int maxX)
{
	if (_kbhit()) // 키를 입력했을때 실행된다.
	{
		//X좌표
		if (GetAsyncKeyState(VK_LEFT))
		{
			// playerX좌표를 -1 해준다.
			*playerX -= 1;
			
			if (*playerX <= 0);
			{
				*playerX = 0;
			}
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			*playerX += 1;
			if (*playerX >= maxX);
			{
				*playerX = 0;
			}
		}
		else if (GetAsyncKeyState(VK_UP))
		{
			*playerY -= 1;
			if (*playerY <= 0);
			{
				*playerY = 0;
			}

		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			*playerY += 1;
		}


	}
}

void InputExample()
{
	int playerX = 0;
	int playerY = 0;
	int maxX = 10;
	while (1)
	{
		GetPlayerInput(&playerX, &playerY, maxX);

		printf("X,Y좌표 : %d, %d\n", playerX, playerY);

		Sleep(100);
	}
}

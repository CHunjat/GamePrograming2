#include"playerinput.h"
#define WIDTH 10 
#define HEIGHT 20 


void Getinput(int playerX, int playerY)
{
	if (_kbhit())
	{
		(GetAsyncKeyState(VK_LEFT));
	}
	if (_kbhit())
	{
		(GetAsyncKeyState(VK_RIGHT));
	}
	if (_kbhit())
	{
		(GetAsyncKeyState(VK_UP));
	}
	if (_kbhit())
	{
		(GetAsyncKeyState(VK_DOWN));
	}
}

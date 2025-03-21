#include <stdio.h> //printf scanf
#include <Windows.h> // 콘솔관련함수
#include <conio.h> // getch_
#include <time.h>  // time 
#include <stdlib.h> // srand rand
#include <stdbool.h> // true false 타입선언


typedef struct
{
	char* PlayerName;
	COORD Pos;
	
}Player;

typedef struct
{
	char* itemName;
	COORD Pos;
	BOOL hasItem;
	// 이미지

}Item;

// 구조체 stage - 2차원 배열 

void GetPlayerInput(Player* PlayerPtr);
void ShowPlayer(const Player* PlayerPtr);

void InteractwithItem(Player* PlayerPtr, Item* itemPtr);
void ShowPlayerItemInfo(Item* itemPtr);
void ShowPlayerAllItemInfo(Item itemArray[], int length);


void showAllitem(Item itemArray[], int length);
void GotoXY(int PosX, int PosY);
void GotoCOORD(COORD Pos);


//두개의 좌표를 매개변수로 받아와서 비교하는 함수
BOOL ComPareCOORD(COORD Pos1, COORD Pos2);//같으면 TRUE 다르면 FALSE

#include <stdio.h> //printf scanf
#include <Windows.h> // �ְܼ����Լ�
#include <conio.h> // getch_
#include <time.h>  // time 
#include <stdlib.h> // srand rand
#include <stdbool.h> // true false Ÿ�Լ���


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
	// �̹���

}Item;

// ����ü stage - 2���� �迭 

void GetPlayerInput(Player* PlayerPtr);
void ShowPlayer(const Player* PlayerPtr);

void InteractwithItem(Player* PlayerPtr, Item* itemPtr);
void ShowPlayerItemInfo(Item* itemPtr);
void ShowPlayerAllItemInfo(Item itemArray[], int length);


void showAllitem(Item itemArray[], int length);
void GotoXY(int PosX, int PosY);
void GotoCOORD(COORD Pos);


//�ΰ��� ��ǥ�� �Ű������� �޾ƿͼ� ���ϴ� �Լ�
BOOL ComPareCOORD(COORD Pos1, COORD Pos2);//������ TRUE �ٸ��� FALSE

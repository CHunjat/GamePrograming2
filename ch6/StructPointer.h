#pragma once

#include <stdio.h>
#include <Windows.h>
// '�÷��̾�' - �̸�, ��ǥ(�̵�), ������ ������ 

typedef struct _Pos
{
	int posX; 
	int posY;
}Pos;
typedef struct _Ipos
{
	int iposX;
	int iposY;
}Ipos;

typedef struct _Player
{
	char* playerName;  // "ȫ�浿"
	Pos   playerPos;   // posX,posY
	
}Player;

typedef struct _Item
{
	char* itemName;
	Ipos itemPos;

}ItemPos;

void Ch6Example();

void ShowPlayerInfo1(Player player);

void ShowPlayerInfo2(const Player* playerPtr);

void ShowPlayerInfo3(const Player* playerPtr);

void ChangePlayerPos(Player* playerPtr);

void Item(ItemPos* ItemPtr);
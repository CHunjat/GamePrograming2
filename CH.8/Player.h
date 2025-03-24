#pragma once

#include <stdio.h>
#include <string.h>

#define NAMELENGTH 50

// 구조체 선언
// Player 이름 선언
// Player 플레이어의 이름을 저장할 배열 char name[이름의 최대 길이 ]



typedef struct
{
	char* Name[NAMELENGTH];
	

}Player;

void SetPlayerName(char* PlayerNamePtr);

void SetPlayer(Player* Player, const char* name);
void ShowPlayerInfo(PlayerPtr);
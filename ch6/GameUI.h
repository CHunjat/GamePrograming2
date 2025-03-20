#pragma once

#include <stdio.h> //printf scanf
#include <Windows.h> // 콘솔관려함수
#include <conio.h> // getch_
#include <time.h>  // time 
#include <stdlib.h> // srand rand
#include <stdbool.h> // true false 타입선언
#include "StructPointer.h"

/*
* 아이템 구조체
* 아이템 이름 
* 아이템의 좌표
* 아이템의 레벨
* 아이템의 공격력 강화 보너스 
*/

//아이템의 좌표 플레이어의 좌표 비교해 (ItemX, playerX 비교, itemY playerY비교 둘다 같으면 -> 아이템을 획득한다)


void GameStart();

void InputPlayerKey(Player* playerPtr);

void GotoXY(int x, int y);

void ShowPlayerInfo(const Player* playerPtr);

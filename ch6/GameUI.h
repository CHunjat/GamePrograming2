#pragma once

#include <stdio.h> //printf scanf
#include <Windows.h> // �ְܼ����Լ�
#include <conio.h> // getch_
#include <time.h>  // time 
#include <stdlib.h> // srand rand
#include <stdbool.h> // true false Ÿ�Լ���
#include "StructPointer.h"

/*
* ������ ����ü
* ������ �̸� 
* �������� ��ǥ
* �������� ����
* �������� ���ݷ� ��ȭ ���ʽ� 
*/

//�������� ��ǥ �÷��̾��� ��ǥ ���� (ItemX, playerX ��, itemY playerY�� �Ѵ� ������ -> �������� ȹ���Ѵ�)


void GameStart();

void InputPlayerKey(Player* playerPtr);

void GotoXY(int x, int y);

void ShowPlayerInfo(const Player* playerPtr);

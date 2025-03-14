#pragma once
#include <stdio.h>

void ShowLecture();

void swap(int* a, int* b); // 함수의 인자에 어떤 경우에 포인터를 사용해야 할까?

void IncreaseScore(int* score, int points); // score 포인터, points는 값

void UpgradeWeapon(int* weaponLv, int baseAP, float* weight); // 먼저 포인터를 할때 함수만들고 외부에서 변경할지말지 고민하는 첫번재단꼐임 이게

void increaseItem(int* itemA, int itemB);
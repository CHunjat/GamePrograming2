#pragma once

#include <stdio.h>
#include <Windows.h>

// 플레이어의 좌표 
// 왼쪽 화살표기를 누르면 x좌표를 -1 실제 값은 바뀌지 않고 안에서만 바뀜
void GetPlayerInput(int* playerX, int* playerY, int minY);

void InputExample();
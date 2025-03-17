#pragma once
//시작할때 인벤토리 크기 4칸
//특정 이벤트를 통해 최대 크기를 n칸으로 증가
//scanf()로 함수 구현하기
// 1번 인벤토리 최대 크기 증가 2번 현재 인벤토리의 수

// 전역 포인터 변수

#include <stdio.h>


extern int* InventoryPtr;

void ShowInventoryCount(int* Inventory);

void IncreaseInventoryCount(int* Inventory, int increaseCount);

void InventoryExample();

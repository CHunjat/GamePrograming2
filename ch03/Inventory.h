#pragma once
//�����Ҷ� �κ��丮 ũ�� 4ĭ
//Ư�� �̺�Ʈ�� ���� �ִ� ũ�⸦ nĭ���� ����
//scanf()�� �Լ� �����ϱ�
// 1�� �κ��丮 �ִ� ũ�� ���� 2�� ���� �κ��丮�� ��

// ���� ������ ����

#include <stdio.h>


extern int* InventoryPtr;

void ShowInventoryCount(int* Inventory);

void IncreaseInventoryCount(int* Inventory, int increaseCount);

void InventoryExample();

#include <stdio.h>
#include "player.h"

/*
* �ۼ��� : 2025.3.21.
* �ۼ��� :�� 
* ���� : ����ü�� ���� �����
*/

/*
* ������ �ּҸ� �̿��� ���ְ� �Ǿ���.
* 1. ������ ���� �����ϴ� ��				int* numptr;
  2. ������ ���� �ּҸ� ȣ���ϴ� ��		int num; &num;
  3. �ּҿ��� ���� �����ϴ� ��			*numptr;
*/

/*
* 
* �����Ϳ� ������
* �������� ������� : �ڷ����� ũ�⸸ŭ ����. int -> 4����
* �迭             : ������ �ּ� + i) i��° �ּҸ� ȣ���ϴ� ��
*/

/*
* ����ü : ����� ���� �ڷ���
*/

/*
* ���ӿ� ����� �Լ� ����
* player - item - enermy
*
*/

/*
* ���
* 1. �̵�����
* 2. ��ȣ�ۿ� ����
* 
*/


 int main()
{
	 COORD PlayerPos = { 0,0 };
	 Player Player = { "���谡", PlayerPos };    // �̸�, ��ǥ
	 
	 COORD itemAPos = { 5,5 };
	 Item itemA = { "������A", itemAPos, false}; // �̸��� ��ǥ�� ȹ�濩��
	 //printf("�÷��̾� �̸� : %s", Player.PlayerName);
	 COORD itemPos = { 10,10 };
	 Item itemB = { "������B", itemPos, false };

	 Item GameItems[2] = { &itemA, &itemB }; // item�迭�� �����ͼ� ����ϴ� �Լ� �����ϱ�!


	 while (true)
	 {
		 //system("cls");
		 GetPlayerInput(&Player);
		 ShowPlayer(&Player);

		 GotoCOORD(itemAPos);
		 printf("��");

		 InteractwithItem(&Player, &itemA); // �ּҿ� �����Ͱ� ������� �ʾҴ�. -> �� ����(���ο���) call by value, ref
		 ShowPlayerItemInfo(&itemA);
		 //ShowPlayerAllItemInfo(&GameItems, 2);

		 //�迭�� �Ű������� �޾ƿͼ� ������ �����Ϳ� �����Ѵ�.
		 Sleep(100);
	 }
}

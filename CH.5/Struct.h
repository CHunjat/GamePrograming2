#pragma once

/*
* ��ǥ : �������� ���� ���� �ؼ� 
* ����, �Ǽ�, ����, ǥ���ϴ� ��� - C���
  �������� �����ߴ�. �̸�, ����, ��ȣ, Ÿ�� - #define ITEMCOUNT 5
  �������� ���� �����Ѵ�. 
  �ϳ��� �迭�� ��� �������� ǥ�� �� �� �ִ�.
  �������� �����ؼ� ������ �����͸� �迭�� ǥ���Ѵ�.
*/


/*
* ����ü
*  - Struct : ����ڰ� ���� ������ �ڷ��� 
*  - �� �����͸� ���� �����ұ�? (why) 
*/

/*
* 2���� ��ǥ - int x��ǥ, int y��ǥ;
* int x; 
* int y;
* �׻� 2���� ��ǥ�� �̷���� �ִ�. �츮�� ���� ��ǥ�� �ǹ��ϴ� �ڷ����� ���� �� ������?
*/



/*
* 1. ����ü ǥ�� ��� strcut �̸� { int x, int y, int z }
  2. ����ü �ȿ� ����ü ���� �� ������? - �� : ����, ������ ���� ����, ȣ�� ����

*/
#include <stdio.h>

typedef struct pos
{
	int xpos;
	int ypos;

}pos;

/*
* ����ü ������ �� ���� struct Ű���带 �ٿ��ִ� ���� ���ŷӴ�.
* typedef ����� �ϸ� ~~~~ Ÿ�� �̸��� {} Ÿ�� ������ ����
* typedef strcut Ÿ���� �̸��� ������ �� �ִ�.
* ���� struct Ÿ���̸��� �����ϸ� struct pos ���·δ� ����� ���Ѵ�.
*/


/*
* ����ü�� �̿��ؼ� �Լ��� ����� ��.
*/

typedef struct circle // ������ ������ ������ �����̴� . -> ���� ���̿� ȣ�� ���� ���� �� �ִ�.
{
	pos origin;
	double radius; 

}circle;

void StructExample();

void CalculateCircleinfo(circle circle);


//�÷��̾��� ��ǥ�� �̿��ؼ� �÷��̾��� ������ ����ϴ� �Լ�
typedef struct Player
{
	char* V;
	pos Vpos;
	//1. ��ǥ
	//2. ����
	//3. ������
}Player;

void ShowPlayerCurrentPos(Player V);


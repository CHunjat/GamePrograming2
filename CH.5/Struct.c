#include "Struct.h"

void StructExample()
{

	//������ �����ϴ� �÷��̾��� ������ ������. (1,��ġ��)
	struct pos playerPos = { 1,1 };

	printf("[%d %d]", playerPos.xpos, playerPos.ypos);

	// �÷��̾��� ��ǥ�� ������ּ���  
	// ���� ������(.) ������ �����Ϳ� ������ �� �ִ�.

	pos origin1 = { 0,0 };
	struct circle mycircle = { origin1, 2.5 };
	printf("���� ���� : [%d,%d], ������ : %lf\n\n", mycircle.origin.xpos, mycircle.origin.ypos, mycircle.radius);

	CalculateCircleinfo(mycircle);



	
}

void CalculateCircleinfo(circle circle)
{

	printf("ȣ�� ���� : %lf\n", 2 * 3.14 * circle.radius);
	printf("���� ���� : %lf\n", 0.5 * 3.14 * circle.radius * circle.radius);
	printf("������ ��ġ : [%d,%d]\n", circle.origin.xpos, circle.origin.ypos);
}

struct pos playerPos = { 1,1 };

char playername[10] = "V";

void ShowPlayerCurrentPos(Player V)
{

	Player myPlayer = { playername, playerPos };
	printf("�÷��̾� �̸� : [%s,%d]\n", playername, playerPos);



}

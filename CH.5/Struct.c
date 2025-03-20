#include "Struct.h"

void StructExample()
{

	//게임의 등장하는 플레이어의 정보를 만들어본다. (1,위치값)
	struct pos playerPos = { 1,1 };

	printf("[%d %d]", playerPos.xpos, playerPos.ypos);

	// 플레이어의 좌표를 출력해주세요  
	// 접근 연산자(.) 내부의 데이터에 접근할 수 있다.

	pos origin1 = { 0,0 };
	struct circle mycircle = { origin1, 2.5 };
	printf("원의 원점 : [%d,%d], 반지름 : %lf\n\n", mycircle.origin.xpos, mycircle.origin.ypos, mycircle.radius);

	CalculateCircleinfo(mycircle);



	
}

void CalculateCircleinfo(circle circle)
{

	printf("호의 길이 : %lf\n", 2 * 3.14 * circle.radius);
	printf("원의 넓이 : %lf\n", 0.5 * 3.14 * circle.radius * circle.radius);
	printf("원점의 위치 : [%d,%d]\n", circle.origin.xpos, circle.origin.ypos);
}

struct pos playerPos = { 1,1 };

char playername[10] = "V";

void ShowPlayerCurrentPos(Player V)
{

	Player myPlayer = { playername, playerPos };
	printf("플레이어 이름 : [%s,%d]\n", playername, playerPos);



}

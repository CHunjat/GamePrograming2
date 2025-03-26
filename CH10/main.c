#include "ConsoleGame.h"
#include "Stage.h"

/*
* stage1 목표지점 탈출구 위치에 플레이어가 도달하면 stage2를 실행
*/

int main()
{

	//for (int i = 0; i < STAGE_HEIGHT; i++)
	//{
	//	printf("%s\n", Stage2[i]);
	//}


	COORD stagePos = { 0,0 };
	ShowStage(Stage1, stagePos);

	COORD stagePos2 = { 50,0 };

	//플레이어의 위치 
	GoToXY(10, 10);
	printf("*");


	// 스테이지에 포함된 문자를 출력하는 예시
	COORD tempPos = { 1,1 };
	char tempChar = ReturnValueFromStage(Stage1, tempPos);
	printf(" 스테이지 특정 좌표 문자 값 : %c\n", tempChar);

	// 플레이어의 다음 위치가 특정 문자인 경우 실행

	if (CanMoveStage(Stage1, tempPos, '@')) // CanMoveStage?
	{
		system("cls"); // 전체화면을 지운다
		ShowStage(Stage2, stagePos2); // 선택한 스테이지를 출력한다.
		GoToXY(10+50, 10); //커서위치 이동
		printf("*"); // 플레이어 문자출력

	}

	// 플레이어의 위치를 이동
	while (true)
	{

	}
}
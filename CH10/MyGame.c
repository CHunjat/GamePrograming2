#include "Mygame.h"

void GameStart()
{
	//플레이어를 설정해주세요 - 이름, 종족, 좌표
	Player player;
	COORD playerPos = { 25,10 }; //항상 플레이어는 지정된 좌표에서 시작을 한다는 코드
	SetPlayer(&player);

	// 시작 스테이지에서 플레이어가 출력된다.
	COORD stagePos = { 20,0 };
	ShowStage(Stage1, stagePos);

	player.pos = PlusCOORD(playerPos, stagePos);  // 플레이어 위치 지정 


	COORD UserInterfacePos = { 60,0 };

	// UI출력 . 플레이어의 조작
	// ShowPlayerUIinfo(&player)

	while (true)
	{
		//1.플레이어 이동구현
		GoToXY(player.pos.X, player.pos.Y);
		printf("  "); 

		SetPlayerInput(&player);
		GoToXY(player.pos.X, player.pos.Y);
		printf("★");

		COORD playerStagePos = { player.pos.X - stagePos.X, player.pos.Y - stagePos.Y };

		if (CanMoveStage(Stage1, playerStagePos, '@')) // 벽에 못닿게하는거!! @ 닿으면 안되게해놓는코드 이거필수
		{
			NextStage(Stage2, stagePos);
			player.pos = PlusCOORD(playerPos, stagePos);

		}
		// 3. 플레이어 UI 출력
		ShowPlayerinfo(&player, UserInterfacePos);
		Sleep(100);
	}
}




//-------------------프로그램 진입점--------------------
void main()
{
	GameStart();

}
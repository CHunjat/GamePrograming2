#include "StructPointer.h"

void Ch6Example()
{

	printf("ch6\n");

	Pos playerPos = { 5,5 };
	playerPos.posX = 3;
	playerPos.posY = 4;

	Player player1 = { "V", playerPos };

	Ipos itemPos = { 8,5 };
	itemPos.iposX = 5;
	itemPos.iposY = 8;

	ItemPos Name = { "클템", itemPos };




	//printf("플레이어의 이름 : %s, 플레이어의 현재 위치 : [%d,%d]", player1.playerName, player1.playerPos.posX, player1.playerPos.posY);

	//ShowPlayerInfo1(player1); // 변수전달 1번호출
	//ShowPlayerInfo2(&player1); // 주소전달 2번호출
	ChangePlayerPos(&player1); //1증가 
	ShowPlayerInfo3(&player1); // 주소전달 2번호출


}

void ShowPlayerInfo1(Player player1)
{
	printf("플레이어의 이름 : %s, 플레이어의 현재 위치 : [%d,%d]", 
		player1.playerName, player1.playerPos.posX, player1.playerPos.posY);

}

void ShowPlayerInfo2(const Player* playerPtr) // 메모리가 1번보다 적어서 좋고 효율적임. // 주소로부터 값을 가져오려면 앞에 별
{
	printf("플레이어의 이름 : %s, 플레이어의 현재 위치 : [%d,%d]", 
		(*playerPtr).playerName, (*playerPtr).playerPos.posX, (*playerPtr).playerPos.posY);

                             
}

void ShowPlayerInfo3(const Player* playerPtr) // 같은 방법 //2번방법과 3번방법은 완전히 똑같은거임.
{
	printf("플레이어의 이름 : %s, 플레이어의 현재 위치 : [%d,%d]", 
		playerPtr->playerName, playerPtr->playerPos.posX, playerPtr->playerPos.posY);

}
 
void ChangePlayerPos(Player* playerPtr)  //변수는 . 주소는 ->
{
	playerPtr->playerPos.posX += 1;
	playerPtr->playerPos.posY += 1;

}

void Item(ItemPos* ItemPtr)
{
}


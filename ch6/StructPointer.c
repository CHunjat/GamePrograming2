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

	ItemPos Name = { "Ŭ��", itemPos };




	//printf("�÷��̾��� �̸� : %s, �÷��̾��� ���� ��ġ : [%d,%d]", player1.playerName, player1.playerPos.posX, player1.playerPos.posY);

	//ShowPlayerInfo1(player1); // �������� 1��ȣ��
	//ShowPlayerInfo2(&player1); // �ּ����� 2��ȣ��
	ChangePlayerPos(&player1); //1���� 
	ShowPlayerInfo3(&player1); // �ּ����� 2��ȣ��


}

void ShowPlayerInfo1(Player player1)
{
	printf("�÷��̾��� �̸� : %s, �÷��̾��� ���� ��ġ : [%d,%d]", 
		player1.playerName, player1.playerPos.posX, player1.playerPos.posY);

}

void ShowPlayerInfo2(const Player* playerPtr) // �޸𸮰� 1������ ��� ���� ȿ������. // �ּҷκ��� ���� ���������� �տ� ��
{
	printf("�÷��̾��� �̸� : %s, �÷��̾��� ���� ��ġ : [%d,%d]", 
		(*playerPtr).playerName, (*playerPtr).playerPos.posX, (*playerPtr).playerPos.posY);

                             
}

void ShowPlayerInfo3(const Player* playerPtr) // ���� ��� //2������� 3������� ������ �Ȱ�������.
{
	printf("�÷��̾��� �̸� : %s, �÷��̾��� ���� ��ġ : [%d,%d]", 
		playerPtr->playerName, playerPtr->playerPos.posX, playerPtr->playerPos.posY);

}
 
void ChangePlayerPos(Player* playerPtr)  //������ . �ּҴ� ->
{
	playerPtr->playerPos.posX += 1;
	playerPtr->playerPos.posY += 1;

}

void Item(ItemPos* ItemPtr)
{
}


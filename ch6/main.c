/*
* �ۼ��� : 2025.3.20.
* �ۼ��� : �赿��
* ����   : ����ü�� ������.
* 
*/

/*
* ����ü�� �ּҸ� �����ϰ� ����ϴ� ���
* 
* ����ü�� ������ TYPE : Player
* 
* Ÿ���̸�* �̸� 
* Player*   playerptr;
*/


/*
* ����ü �������� ���� �����ϴ� ���
* 
* void ShowPlayerInfo(Player* Playerptr)
* 
* 1. PlayerPtr �ּ��̱� ������ ���� ������ �ؾ��Ѵ�. ������ ������ ��� ->>(*PlayerPtr)
* 2. ����ü�� �������� �����Ϳ� �����ϴ� ������ (���ٿ����� '.' ���) (*PlayerPtr).PlayerName;
* 3. *PlayerPtr.playerName �������� �켱������ �����ϱ� ������   *(Playerptr.playerName) -> ó�� �ؾ���
*    => PlayerPtr �ּҿ��� PlayerName�� ������ �Ŀ� �� �ּ��� ���� �������ض�.
* 4. ȭ��ǥ ������ ���� : ����ü�� �ּ� ����'->' *(PlayerPtr.���� ������) �� ����.!! 
* 
* {
*   ���̰��� (*PlayerPtr).PlayerName;   
*   ���̰��� playerPtr->PlayerName;
* } 
* 
*/

#include "StructPointer.h"
#include "GameUI.h"


int main()
{
	//Ch6Example();

	GameStart();

}
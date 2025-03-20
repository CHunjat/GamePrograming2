/*
* 작성일 : 2025.3.20.
* 작성자 : 김동훈
* 주제   : 구조체와 포인터.
* 
*/

/*
* 구조체의 주소를 선언하고 사용하는 방법
* 
* 구조체를 선언한 TYPE : Player
* 
* 타입이름* 이름 
* Player*   playerptr;
*/


/*
* 구조체 포인터의 값을 접근하는 방법
* 
* void ShowPlayerInfo(Player* Playerptr)
* 
* 1. PlayerPtr 주소이기 떄문에 값에 접근을 해야한다. 역참조 연산자 사용 ->>(*PlayerPtr)
* 2. 구조체의 변수에서 데이터에 접근하는 연산자 (접근연산자 '.' 사용) (*PlayerPtr).PlayerName;
* 3. *PlayerPtr.playerName 연산자의 우선순위가 존재하기 때문에   *(Playerptr.playerName) -> 처럼 해야함
*    => PlayerPtr 주소에서 PlayerName을 접근한 후에 그 주소의 값을 역참조해라.
* 4. 화살표 연산자 제공 : 구조체의 주소 변수'->' *(PlayerPtr.접근 데이터) 와 같다.!! 
* 
* {
*   둘이같다 (*PlayerPtr).PlayerName;   
*   둘이같다 playerPtr->PlayerName;
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
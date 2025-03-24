/*
* 작성일 : 25.3.14.
* 작성자 : 나
* 주제   : 문자열의 응용
*/

/*
* 문자열 : 배열로 이루어진 문자
* string :  char(acter) / array <- 배열
*
*
*/

/*
* 문자열 맵을 만들어본다.
*/

#include "MyString.h"
#include "Player.h"


/*
* "  " 문자열의 배열
* "   " 갯수 +1 크기가 지정되어있다.
* "apple" a,p,p,l,e, '\0' 문자열의 종료를 의미한다. 
* "apple is " 0101010010 문자열의 끝을 알려주기 위해서 -  > '\0'
* 
*/

#define STAGE_HEIGHT 5
#define STAGE_WIDTH 6
char stage1[STAGE_HEIGHT][STAGE_WIDTH + 1] =
{
	"######", // char 배열
	"#    #",
	"#    #",
	"#    #",
	"######",
};

char stage2[STAGE_HEIGHT][STAGE_WIDTH + 1] =
{
	"#######", // char 배열
	"#     #",
	"# # # #",
	"#     #",
	"#######",
};


int main()
{
	//ArrayExample();



	// 1. 게임 시작

	// 플레이할 캐릭터의 이름을 설정한다. SetPlayerName
	// char* 에 저장을 해서 원할때 이 데이터를 호출한다. ShowPlayerInfo
	// int, double 주소
	// 문자열(문자의 배열) 배열의 이름이 주소이기때문에 // 문자열(배열) 불러올땐 앞에 & 안붙여도됨 !!! << 짱중요
	// 배열 포인터의 주소를 변경하면 안된다. (상수 포인터) 

	char* PlayerName;

	printf("플레이어의 이름을 입력해주세요.\n");

	char input[50];

	scanf_s("%s", input, 50);


	// string.h
	//SetPlayerName(PlayerName);  

	//printf("%s\n", PlayerName);

	// Player 코드

	Player player;
	Player* PlayerPtr = &player;
	char inputA[10] = " ";
	scanf_s("%s", inputA, 10);
	SetPlayer(&player, inputA);
	ShowPlayerInfo(&player);

	// 2차원 배열
	printf("\n");
	printf("맵 출력\n");

	// 가로+1줄 세로xn줄 출력하도록 작성
	for (int i = 0; i < STAGE_HEIGHT; i++)
	{
		printf("%s\n", stage1[i]);
	}

}


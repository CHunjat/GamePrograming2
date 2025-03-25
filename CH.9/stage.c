#include "stage.h"

char Stage1[STAGE_COL][STAGE_ROW + 1] =
{
	"##########", // '\0'
	"#        #",
	"#        #",
	"#        #",
	"#        #",
	"#        #",
	"#        #",
	"#        #",
	"#        #",
	"##########" // '\0'
};

char Stage2[STAGE_COL][STAGE_ROW + 1] =
{
	"##########", // '\0'
	"#        #",
	"#        #",
	"#   ##   #",
	"#   ##   #",
	"#   ##   #",
	"#   ##   #",
	"#        #",
	"#        #",
	"##########" // '\0'
};


void Stage12(STAGE* StagePtr, int index)
{
	switch (index)
	{
	case 1:
		StagePtr->NAME = "황혼의 숲";
		StagePtr->map = Stage1;
		break;

	case 2:
		StagePtr->NAME = "붕탁의 숲";
		StagePtr->map = Stage2;

		break;
	default:
		printf("잘못된 스테이지 번호입니다\n");
		break;
	}

}

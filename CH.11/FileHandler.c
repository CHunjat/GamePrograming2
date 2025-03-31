#include "FileHandler.h"
#define RANKFILEPASS "RANK.TXT"

/*
* 1. FILE* 선언하세요, 경로, 모드 
*/


void SaveScore(char* name, int score)
{
	FILE* fp = fopen(RANKFILEPASS, "w"); // wt :  write txt, wb : write binary

	if (fp == NULL)
	{ 
		printf("경로에 파일이 존재하지 않습니다.\n");
		return;
	}

	fprintf(fp, "%s %d\n", name, score);

	// futc, fputs, fprintf
	fclose(fp);
}

void LoadRank()
{
	FILE* fp = fopen(RANKFILEPASS, "r"); // wt :  write txt, wb : write binary

	if (fp == NULL)
	{
		printf("경로에 파일이 존재하지 않습니다.\n");
		return;
	}


	char name[4];
	int score;

	fscanf(fp, "%s %d\n", name, &score);
	printf("이름 : %s, 점수 : %d\n", name, score);

	// futc, fputs, fprintf
	fclose(fp);
}

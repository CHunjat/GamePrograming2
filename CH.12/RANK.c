#include "RANK.h"

void FileSaveTemp()
{
	FILE* fp = fopen(RANKFILEPATH, "w");
	//fputc
	/*fputc('a', fp);
	fputc('\n', fp);
	fputc('a', fp);
	fputc('a', fp);*/
	//fputs - 문자열로 저장한다.
	//fputs("a\naa", fp);
	//fprintf
	fprintf(fp, "%d %d %s", 1,100, "Alice");

	fclose(fp);
}

void FileSave(const char* fileName, Rank rank[], int count)
{
	FILE* fptr = fopen(fileName, "w");

	for (int i = 0; i <count; i++)
	{
		fprintf(fptr, "%d %d %s\n", rank[i].order, rank[i].score, rank[i].name);
	}
	fclose(fptr);
	
}

void fileLoadTemp()
{
	FILE* fp2 = fopen(RANKFILEPATH, "r");

	/*char mstring[12];
	fgets(mstring, 12, fp2);
	printf("%s\n", mstring);*/

	int order = 0;
	int score = 0;

	char name[MAXLENGTH];

	fscanf(fp2, "%d %d %s", &order, &score, name);
	printf("순서 : %d, 점수 : %d, 이름 :%s\n", order, score, name);

	fclose(fp2);
}

int LoadRank(const char* fileName, Rank rank[])
{
	int count = 0;

	FILE* fptr = fopen(fileName, "r");

	if (fptr == NULL)
	{
		printf("파일열기 실패\n");
		return;
	}

	while (1)
	{
		if (fscanf(fptr, "%d %d %49s", &rank[count].order, &rank[count].score, rank[count].name) == EOF)
		{
			break;
		}
		count++;
	}
	fclose(fptr);
	return count;
}

void PrintfRanking(Rank rank[], int count)
{


	// count 횟수만큰 반복하는 코드
	//printf("%d, %d, %s\n", rank[0].order, rank[0].score, rank[0].name);
	//printf("%d, %d, %s\n", rank[1].order, rank[1].score, rank[1].name);

	//테두리 만든다.
	printf("+------+------+------------------+\n");
	printf("| 순서 | 점수 |       이름       |\n");
	printf("+------+------+------------------+\n");

	for (int i = 0; i < count; i++)
	{
		printf("| %4d | %4d | %-16s |\n", i + 1, rank[i].score, rank[i].name);
	}

	//테두리 만든다
	printf("+------+------+------------------+\n");
}

void AddRank(Rank rank[], int* order, const char* name, int score)
{
	if (*order < MAXPLAYER)
	{
		rank[*order].order = *order + 1;
		rank[*order].score = score;
		strncpy(rank[*order].name, name, MAXLENGTH - 1);
		rank[*order].name[MAXLENGTH -1] = '\n';
		(*order)++;
	}
	else
	{
		printf("최대 플레이어 저장 수를 초과하였습니다\n");
	}
	
}

void AddRankData(Rank rank[], int* order)
{
	if (*order < MAXPLAYER)
	{
		printf("새로운 플레이어의 이름을 입력하세요 : \n ");
		char newName[MAXLENGTH];
		int newScore;

		scanf(" %49s", newName);
		printf(" 점수를 입력하세요 : \n ");
		scanf("%d", &newScore);

		AddRank(rank, order, newName, newScore);
	}

}

void DeleteRankData(Rank rank[], int* order, int index)
{
	// 1. order <- 배열의 순서 , -1 해줘야한다.
	// 2. 지우고 싶은 순서를 전달해줘야한다. order이다.

	if (index <= 0)
	{
		printf("랭킹에 데이터가 없습니다.\n");
		return;
	}
	if (index >= *order)
	{
		printf("잘못된 인덱스 입니다.\n");
		return; 
	}

	for (int i = index; i < *order - 1; i++)
	{
		rank[i] = rank[i + 1]; // == rank[0] = rank[1];rank[1] = rank[2]; rank[2] = rank[3]; rank[3] = rank[4];
	
	}
	(*order)--; // 데이터를 삭제했기 떄문에 현재 데이터의 총 갯수를 1감소시킨다.
	
	


}

int FindMaxIndex(Rank rank[], int size) // 가장큰 점수 녀석의 인덱스
{
	int index = 0;

	//rank 데이터 안에서 점수가 가장 큰 인덱스를 찾아서 index변수에 저장하고 반환한다.

	int maxValue = rank[0].score; //처음 데이터를 읽어왔을때 가장 큰수는 당연히 첫번째 데이터다.

	for (int i = 1; i < size; i++)
	{
		if (rank[i].score > maxValue)
		{
			maxValue = rank[i].score;
			index = i;
		}
	}
	return index;
}

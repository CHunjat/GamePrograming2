#include "Shop.h"

void ShowShopList(Shop item[], int itemprice)
{
	printf("========= 상점에 방문하였습니다.========\n");
	printf("==================목록==================\n");
	printf("+  순번  +     이름     +     가격     + \n");
	for (int i = 0; i < itemprice; i++)
	{
		printf("| %d | %s | %-d |\n", i + 1, item[i].itemname, item[i].itemprice);
	}

}

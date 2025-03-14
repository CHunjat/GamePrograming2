#include "lecture.h"


// 전역변수 
int GameScore = 0;

void ShowLecture()
{
	printf("강의 예제 1\n");

	int num1 = 10;

	int* numptr = &num1;       // 주소 = 값 
	
	printf("num1의 값을 출력 : %d\n", num1);
	printf("주소를 출력 : %p\n\n", numptr);

	printf("강의 실습 1.\n"); // 두 숫자의 값을 변경하는 함수를 구현한다.

	//int* 2개 필요하다. int 형 주소가 2개 필요하다.
	int numA = 5;
	int numB = 6;
	printf("numA의 값: %d, numB의 값 :%d\n", numA, numB);
	swap(&numA, &numB);
	printf("numA의 값: %d, numB의 값 :%d\n\n ", numA, numB);

	printf("응용 예제 1. \n\n"); // 점수를 획득하는 시스템을 구현 // 특정행동, 시간에 따라 증가할때

	IncreaseScore(&GameScore, 10);
	printf("현재점수 : %d\n\n", GameScore);

	//변수 3개를 선언해보세요
	printf("강의 실습 2.\n");
	float weight = 1.5f;
	int WeaponLv = 1;
	int baseAP = 10;

	printf("가중치 :%f, 레벨 :%d, 기본공격력 : %d\n\n", weight, WeaponLv, baseAP);
	UpgradeWeapon(&WeaponLv, baseAP,&weight);
	printf("가중치 :%f, 레벨 :%d, 기본공격력 : %d\n\n", weight, WeaponLv, baseAP);

	//정리 
	// 함수를 이용해서 값을 변경한다. 주소를 이용해서 값을 변경할 수 있다.
	// 언제 주소를 사용할까? 1. 외부의 값을 변경 해야할 때, 2. 가져와야 할 데이터 타입이 너무 클 떄 주소만으로 가져올 수 있다. 


	//아이템의 갯수를 증가시키는 함수를 만들어보세요
	printf("강의 실습 3.\n");
	int itemA = 1;
	int itemB = 2;
	increaseItem(&itemA, 1);





	//무기 공격력을 증가시키는 함수
	//같은 함수로 구현할 수 없을까?


}

void swap(int* a, int* b)
{
	int temp = *a; // a는 주소인데, 주소로 부터 값을 가져오는 연산자 (&) temp에 저장 5라는 숫자가 저장되어있다.
	*a = *b; // *포인터변수 = 값 : 의미는 a의 주소에 값을 저장해라! 라는뜻
	*b = temp;         // *b : b의 주소에 저장되어있는 값을 불러와라
	         // 1. (*b - > 6)    //  2.  (*a = 6)  // 3. (numA = 6) 
}

void IncreaseScore(int* score, int points)
{
	//GameScore라는애의 주소를 받아오고
	// *주소 변수 = 값; 외부에 있는 GameScore 값이 변경된다.

	*score += points;
}

void UpgradeWeapon(int* weaponLv, int baseAP, float* weight)
{
	//레벨을 1증가 시킨다.
	// 가중치를 특정 레벨에서 변경한다.

	*weaponLv += 4;
	if (*weaponLv % 5 == 0)
	{
		*weight = *weight * 1.5f;
	}

	printf(" 현재 무기 공격력 : %f\n", *weaponLv * *weight + baseAP);
}

void increaseItem(int* itemA, int itemB)
{
	*itemA += 8;
	if (*itemA % 10 > 0)
	{
		printf(" itemA : %d\n, itemB :%d\n", *itemA, itemB + *itemA);
	}

}

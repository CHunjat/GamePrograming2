/*
* 작성일 25.3.19
* 작성자 : 나
* 주제    : 구조체에 대한 이해
* 
*/

/*
* 지난 시간 복습 - 배열과 포인터
*     | 비고                  | 배열      | 포인터  |
*     | ....                  | ....      | ....    |
*     | 이름이 존재하는가?    | o         |  o      |
*     | 무엇을 저장하는가?    | 시작주소  | 주소    |
*     | 주소값이 변경가능한가?|     X     |    O    |
*/

/*
*  상수 포인터
*  const
*/


#include <stdio.h>
#include "Struct.h"


// array주소의 값을 변경하지 말아주세요 
void ShowAllData(const int* array, int length) // 배열을 가져와서 데이터를 보고싶다. 배열을 가져와서 값을 바꾸는 함수인가?
{
	for (int i = 0; i < length; i++)
	{
		//array[i] += 1; //위에 const를 작성하면 값을 변경하지 말라는 거니까 오류가 난다.
		printf("%d", array[i]);

	}
}

void ShowData(const int* num1ptr) // num1ptr에 들어있는 값을 변경하지 말아주세요
{
	int* rptr = num1ptr; // rptr, num1ptr 주소의 값을 저장
	*rptr += 2; // 결과로 num1ptr 에 들어있는 값이 변경된다. 

	printf("%d \n", *rptr);
}

// item의 이름을 출력하는 함수를 구현해보세요.
// 이름은 변경불가. 

void ShowItemData(const char* ItemName)
{
	//*ItemName = "다른 이름"; // <<안됨
	printf("아이템의 이름은 : %s", ItemName);
}

int main()
{
	int arr1[5] = { 0,1,2,3,4 };
	ShowAllData(arr1, 5);
	printf("\n\n");

	int n1 = 1;
	ShowData(&n1);


	char itemName1[10] = "칼";
	
	ShowItemData(itemName1);

	printf("\n\n");


	printf("ch5\n\n");

	//printf("상수예제\n");

	const int num1 = 10; // num1이라는 녀석이 상수가 된다. 구체적 -> 값을 변경하는 걸 제한한다.

	const int PI = 3.14; // 값을 고정

	int number1 = 2;
	int number2 = 3;
	const int* number1ptr = &number1; // number1ptr 주소를 저장하는 변수에 number1 주소를 저장한다.
	// *number1ptr += 2; //주소안에 들어있는 값을 변경 에러 - > 주소안의 값을 변경하지 마세요 (const) <- 상수 포인터 
	number1ptr = &number2; // 주소 변경 자체는 가능하다.

	int* const number2ptr = &number2; // 주소를 변경하지 못하게 제한하는 방법
	//number2ptr = &number1; // 수정불가
	*number2ptr += 3; 

	const int* const nmuber3ptr = &number2;

	//const pointer
	// 값만 변경할 수있는 형태 // 주소만 변경할 수있는 형태 // 값, 주소 변경못하는 상태
	// 타입* const             // const 타입* 이름          // const 타입* const 이름 


	printf("구조체 예제\n");
	StructExample();


}
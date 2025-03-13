/*
*  작성일 : 3월 13일 
*  작성자 : 나
*  주제   : 포인터
* 
*/

/*
* 포인터가 무엇인가?
* 포인터는 주소이다.
* 변수의 정보를 : 어떤 데이터를 저장하는가 데이터의 크기는 어떻게 되는가?
* 컴퓨터의 입장 : 변수사용->이름으로 호출한다. / 
*/

/*변수의 선언
* int number; number 정수형 값을 저장 할 수 있다. number의 주소를 갖고있다.
*  주소연산자를 사용해서 변수에 들어있는 주소를 출력할 수 있다. &number;
* 주의할 점 : & 변수에서 주소를 가져오구나!, int &number; << 이건 안됨  주소 연산자는 변수가 선언 되고 난 이후에 사용해야함!!!
* 
* 둘다 똑같은 기호를 사용함 어디에서 사용하느냐에 따라 다름!!
* 포인터 연산자 :ex) int* pointerNumber; //포인터 변수를 선언 할때 사용하는 기호
* 역참조 연산자 :ex) *pointerNumber;  //포인터 변수가 선언되고 난 이후에 사용되는 것!!
*/

/* 포인터를 어디에 사용하면 좋은가!!!?
* 컴퓨터 안에 메모리를 저장한믄 영역, 메모리 주소로 저장을 하고 있었다.
* 주소를 알고 있으면 언제 어디서나 값을 가져올 수 있다.
* 
* - 언제?  변수를 만들어 두고 사용을 했어야한다. 프로그램 실행중에 메모리를 할당하고 사용하는 방법. 포인터 + 공적할당
* - 어디서? 함수에서 변경된 값은 외부에 적용이 안된다.Call By Reference
* 저차원 수준의 언어.
*/


/*
* 정리 
* 컴퓨터의 주소 사용방법.
* 1.포인터 변수를 선언하는 방법 int *포인터 변수 이름
* 2.그냥 변수로부터 주소를 가져오는 방법 : 주소연산자 int number= 10; -> &number
* 3.주소로 부터 값을 받아오는 방법 : int* numptr;   ->    *numptr 
*/

#include <stdio.h>
// Call by Value vs call by Reperence
void CallValue(int number)
{
	number = 100;
}

void CallReference(int* numberPtr)
{
	// |-value '= |  R- value
	// int 주소       int 
	// 16진수 -0X019451ABC // 10진수 정수
	// 두개의 타입이 다르다. 문법적으로 같게 만들어줘야한다!! <ㅡ 이게 제일중요했다.
	*numberPtr = 100;

}


void SwapPreview(int numA, int numB)
{
	int temp; // 데이터를 임시 보관할 변수
	temp = numA; // A를 임시보관
	numA = numB; // A가 B의 값으로 변경
	numB = temp; // B가 temp 값으로 변경-> temp가 A로 되어있으니까 A로 변경

	//미리보가ㅣ 형식
	printf("swap을 하면 이런 결과가 나옵니다\n");
	printf("변경된 numA의 값 : %d\n", numA);
	printf("변경된 numB의 값 : %d\n", numB);
}

//외부에서 가져온 값을 변경하고 싶다 . - > 주소의 값을 변경한다.
void Swap(int* num1, int* num2)
{
	int* temp =
	temp = *numA;
	numA = numB;
	numB = temp;

}


 int main()
 {
	printf("포인터가 무엇인가?\n");

	//실습 1. 포인터가 무엇인가
	int number = 10;

	printf("정수출력 : %d\n", number);
	// 포인터를 출력 16진수로 저장되어있는게 포인터다!
	printf("포인터출력 : %p\n", &number);

	// 실습 2.  포인터 사용
	// 기호(문법) 이해
	// *, & 이 두개의 기호를 자주 사용할 예정
    // 포인터변수
	int* pointerNumber; // 포인터 변수의 선언 주소를 저장해주는 (주소값을 넣어줘야함)
	int num1 = 10; // 변수의 선언 - 주소가 같이 저장
	pointerNumber = &num1; //포인터 변수에 변수의 주소값을 대입
	printf("포인터출력 : %p\n", &num1);
	printf("정수출력 : %d\n", *pointerNumber);

	//연습문제. 포인터 실습

	// float형 변수 선언 하고 그 변수의 주소를 출력해보세요
	
	float floatnum = 0.1f;
	float* floatpointer = &floatnum;
	// 주소값 출력
	printf("주소값을 출력해봐용 : %p\n", &floatnum);
	printf("주소로 부터 값을 출력하기 : %f\n", *floatpointer);

	
	int num2 = 5;
	int* num2Ptr = &num2;

	long long longNum = 100;
	long long* longNumberPtr = &longNum;
	printf("longlong 예시\n");
	printf(" 주소로 부터 값을 출력한다 : %d\n", *longNumberPtr);
	//char 형 
	char charnum = 'A';
	char* charpointer = &charnum;
    printf("차형 주소값을 출력 : %p\n", &charnum);
	printf("주소로 부터 값을 출력 : %c\n\n", *charpointer);

	// Call by value, call by Reference

	printf("call by value, call by reference 예시\n");

	int exampleNumber = 10;
	int* exampleNumberPtr = &exampleNumber;
	CallValue(exampleNumber);
	printf("CallValue 실행 후 exampleNumber의 값 : %d\n", exampleNumber);
	CallReference(exampleNumberPtr);
	printf("CallValue 실행 후 exampleNumber의 값 : %d\n", exampleNumber);

	// swap을 구현해본다.
	// numa, numb 가있다 , temp가필요
	// 직전의 강화되어 있는 상태를 기억하고 싶습니다.
	// 롤백 할 수 있도록 기능을 구현합니다.

	// 유저가 몰라야 하는 정보
	int weaponLv = 1;
	int weaponBaseAP = 10;
	int weight = 5;

	//

	int weaponPower = weaponLv * weight + weaponBaseAP;
	
	int* saveWeaponData = &weaponPower; //주소가 있으니까 주소전달 &이거로
	printf("무기 공격력 : %d\n\n", weaponPower);
	printf("무기 공격력 : %d\n\n", *saveWeaponData);


	//swap 예제

	int numA = 50;
	int numB = 60;
	SwapPreview(numA, numB);
	printf("현재 numA, numB의 값\n");
	printf("numA : %d, numB : %d\n", numA, numB);

	Swap(&numA, &numB);
	printf("swap 실행 후 \n");
	printf("현재 numA, numB의 값\n");
	printf("numA : %d,\n numB : %d\n", numA, numB);
}
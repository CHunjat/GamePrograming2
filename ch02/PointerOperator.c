#include "PointerOperator.h"

void pointerExample()
{
	//sizeof()

	int number1 = 0;
	int* number1ptr = &number1;

	double doubleNumber1 = 1.0;
	double* doubleNumberPtr = &doubleNumber1;

	printf("\n");
	printf("포인터 연산 예제\n");

	printf("int 데이터의 크기: %d\n", sizeof(number1));
	printf("double 데이터의 크기: %d\n", sizeof(doubleNumber1));


	// 정수의 크기가 4라는 걸 알고
	// 주소의 크기는 뭘까??? 
	printf("int 주소의 크기: %d\n", sizeof number1ptr);
	printf("double 주소 크기: %d\n", sizeof(doubleNumberPtr));

	//x86 주소의 크기 실행 : 4바이트
	//x64 주소의 크기 실행 : 8바이트 
	// 주소는 크기가 일정하다. 고정되어 있다. 동적 할당할떄 다시
	// 주소를 더해보자!
	// 
	//

	//주소 자체를 더하기 vs 주소를 참조해서 더하기 이걸 구분 잘해야돼!!
	// 변수를 사용하는데, 컴퓨터가 어딘가에 기억하고 있다. 주소라는 이름으로 기억하고 있다.
	//변수의 이름으로 값을 가져올 수있고, 주소로부터 값을 가져올수도 있다.

	//주소 형태로 가져오는 방식(참조형식) - 프로그램이 종료되거나. 직접 메모리를 해제하기 전까지 계속 남습니다. - 힙(Heap) 영역
	
	// 변수의 이름으로 가져오는 방식( 값형식 -> 숫자 자체를 가져온다는 뜻) - {} 코드영역이 끝나는 시점에 메모리가 해제됩니다. - 스택(stack) 영역

	// 모든 코드를 항상 저장하면 안될까요?
	// 게임점수를 일정 값만큼 증가시키는 코드를 작성하고 싶어요. 
	// 저장되어야할 점수 : 게임점수, 
	// 한번만 사용하고 지우면 좋을 거같을 점수 : 게임 점수를 증가 하고 싶은 가중치
	// 모든 코드를 한 번만 사용하고 저장을 안하면?
	// GameScore 포인터 변경해서 저장하는 기능을 구현할 수가 없다.

	// 1줄요약 -> Call by value, call by Reference 구분해서 사용해야할 이유


	printf("numberptr 포인터의 값을 출력 해줘 : %d\n", (*number1ptr + 1));



	//

	printf("주소를 출력해보자 \n");
	printf("현재 주소 : %p\n", number1ptr);
	//주소에다가 더하면 어떻게 될깡? - 배열,포인터
	number1ptr = number1ptr + 1;
	printf("현재 주소 : %p\n\n", number1ptr);


	printf("더블 주소 : %p\n\n", doubleNumberPtr);

	doubleNumberPtr = doubleNumberPtr + 1;

	printf("더블 주소 : %p\n", doubleNumberPtr);

	//주소를 더하면 주소의 값이 가지고 있는 크기 만큼 증가한다.
	//배열과 포인터의 관계 중요!!

	


}

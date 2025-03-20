#pragma once

/*
* 목표 : 아이템을 직접 정의 해서 
* 정수, 실수, 문자, 표현하는 방법 - C언어
  아이템을 구현했다. 이름, 수량, 번호, 타입 - #define ITEMCOUNT 5
  아이템이 많이 존재한다. 
  하나의 배열로 모든 아이템을 표현 할 수 있다.
  아이템을 정의해서 정의한 데이터를 배열로 표현한다.
*/


/*
* 구조체
*  - Struct : 사용자가 직접 정의한 자료형 
*  - 왜 데이터를 직접 정의할까? (why) 
*/

/*
* 2차원 좌표 - int x좌표, int y좌표;
* int x; 
* int y;
* 항상 2개의 좌표로 이루어져 있다. 우리가 직접 좌표를 의미하는 자료형을 만들 수 있을까?
*/



/*
* 1. 구조체 표현 방법 strcut 이름 { int x, int y, int z }
  2. 구조체 안에 구조체 넣을 수 있을까? - 원 : 원점, 반지름 원의 넓이, 호의 길이

*/
#include <stdio.h>

typedef struct pos
{
	int xpos;
	int ypos;

}pos;

/*
* 구조체 선언할 떄 마다 struct 키워드를 붙여주는 것이 번거롭다.
* typedef 사용을 하면 ~~~~ 타입 이름을 {} 타입 재정의 가능
* typedef strcut 타입의 이름을 생략할 수 있다.
* 만약 struct 타입이름을 생략하면 struct pos 형태로는 사용을 못한다.
*/


/*
* 구조체를 이용해서 함수를 만드는 것.
*/

typedef struct circle // 원점과 반지름 구성딘 도형이다 . -> 원의 넓이와 호의 길이 구할 수 있다.
{
	pos origin;
	double radius; 

}circle;

void StructExample();

void CalculateCircleinfo(circle circle);


//플레이어의 좌표를 이용해서 플레이어의 정보를 출력하는 함수
typedef struct Player
{
	char* V;
	pos Vpos;
	//1. 좌표
	//2. 스탯
	//3. 아이템
}Player;

void ShowPlayerCurrentPos(Player V);


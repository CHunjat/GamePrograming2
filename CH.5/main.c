/*
* �ۼ��� 25.3.19
* �ۼ��� : ��
* ����    : ����ü�� ���� ����
* 
*/

/*
* ���� �ð� ���� - �迭�� ������
*     | ���                  | �迭      | ������  |
*     | ....                  | ....      | ....    |
*     | �̸��� �����ϴ°�?    | o         |  o      |
*     | ������ �����ϴ°�?    | �����ּ�  | �ּ�    |
*     | �ּҰ��� ���氡���Ѱ�?|     X     |    O    |
*/

/*
*  ��� ������
*  const
*/


#include <stdio.h>
#include "Struct.h"


// array�ּ��� ���� �������� �����ּ��� 
void ShowAllData(const int* array, int length) // �迭�� �����ͼ� �����͸� ����ʹ�. �迭�� �����ͼ� ���� �ٲٴ� �Լ��ΰ�?
{
	for (int i = 0; i < length; i++)
	{
		//array[i] += 1; //���� const�� �ۼ��ϸ� ���� �������� ����� �Ŵϱ� ������ ����.
		printf("%d", array[i]);

	}
}

void ShowData(const int* num1ptr) // num1ptr�� ����ִ� ���� �������� �����ּ���
{
	int* rptr = num1ptr; // rptr, num1ptr �ּ��� ���� ����
	*rptr += 2; // ����� num1ptr �� ����ִ� ���� ����ȴ�. 

	printf("%d \n", *rptr);
}

// item�� �̸��� ����ϴ� �Լ��� �����غ�����.
// �̸��� ����Ұ�. 

void ShowItemData(const char* ItemName)
{
	//*ItemName = "�ٸ� �̸�"; // <<�ȵ�
	printf("�������� �̸��� : %s", ItemName);
}

int main()
{
	int arr1[5] = { 0,1,2,3,4 };
	ShowAllData(arr1, 5);
	printf("\n\n");

	int n1 = 1;
	ShowData(&n1);


	char itemName1[10] = "Į";
	
	ShowItemData(itemName1);

	printf("\n\n");


	printf("ch5\n\n");

	//printf("�������\n");

	const int num1 = 10; // num1�̶�� �༮�� ����� �ȴ�. ��ü�� -> ���� �����ϴ� �� �����Ѵ�.

	const int PI = 3.14; // ���� ����

	int number1 = 2;
	int number2 = 3;
	const int* number1ptr = &number1; // number1ptr �ּҸ� �����ϴ� ������ number1 �ּҸ� �����Ѵ�.
	// *number1ptr += 2; //�ּҾȿ� ����ִ� ���� ���� ���� - > �ּҾ��� ���� �������� ������ (const) <- ��� ������ 
	number1ptr = &number2; // �ּ� ���� ��ü�� �����ϴ�.

	int* const number2ptr = &number2; // �ּҸ� �������� ���ϰ� �����ϴ� ���
	//number2ptr = &number1; // �����Ұ�
	*number2ptr += 3; 

	const int* const nmuber3ptr = &number2;

	//const pointer
	// ���� ������ ���ִ� ���� // �ּҸ� ������ ���ִ� ���� // ��, �ּ� ������ϴ� ����
	// Ÿ��* const             // const Ÿ��* �̸�          // const Ÿ��* const �̸� 


	printf("����ü ����\n");
	StructExample();


}
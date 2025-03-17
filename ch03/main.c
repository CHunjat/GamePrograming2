/*
* �ۼ��� : 2025.3.17.
* �ۼ��� : ��
* ���� : �޸��� ���(�����Ҵ�)
*/

/*
* ������ : �ּҸ� �ٷ�� ���
* ������ ���� ���� : int* numPtr; ������ ���� �̸�
* ������ �ּҷ� ���� ���� ���� : *numPtr;
* ���� : int num; &num; ������ �Ҵ�� �ּҸ� ������ �� �ִ�.
*/

/*
* �Լ� ��� : �Ű� ���� ��ġ�� ���� ������ �ּҰ� ������
* void functuon(int A, int B);
* �÷��̾��� ��ġ(x,y��ǥ)���� �������ִ� �Լ��� ����� ������.
*/


/* 
* �����ͷ� ���� ���¸� ����غ���!!
* �����Ҵ� ����
* �޸𸮸� ���� �Ҵ����ش�. �޸𸮴� ������ ������ �� ����.
* ���� ���� - �Լ��� ����� �� ���� �����ȴ�.
* �Լ��ȿ��� �����Ҵ� �� �޸𸮴� �������� �ʴ´�!
* �ش� �޸��� ����� ���̳��� ����(����)���� ������ ��� �Ѵ�.
* free(������ ����) <<
* inventory.h �߰�
*/



#include <stdio.h>
#include "Input.h"
#include "Inventory.h"


int* InventoryPtr;

void SetMemoryAndValue(int amount) // �ּҸ� �ϳ� �޾ƿͼ� �ּ��� ���� amount������ �����Ѵ�.
{
	int* num1ptr = NULL;

	                             //numptr �޸� ���� (���� ����), �ּ��� ���� �����Ѵ�.
	num1ptr = malloc(sizeof(int));

	*num1ptr = amount;

	printf("�޸� �ּ��� �� : %p\n", num1ptr);
	printf("�Ҵ��� �޸��� ���� ȣ�� : %d\n", *num1ptr);

	free(num1ptr); // free() ���������� num1ptr�� �޸𸮻� ��� ���´�.


}



int main()
{
	printf("ch3!\n");

	//InputExample();

	printf("������ �������\n");

	int number = 1;
	int* numberPtr = &number;

	//int* num1ptr = NULL; // ����(4����Ʈ ������ �����ϴ� ����)
	//num1ptr = malloc(sizeof(int)); // ���ο� �ּҸ� �Ҵ����� �� ���� ������? memory allocate // malloc
	
	////��ǻ���� �޸� ������ ���� ������ ���ִ� �ּҸ� �Ҵ� �ߴ�.
	//// ���ǹ�, Ư�� ��Ȳ������ �ڵ带 �����ض�  -> �����Ҵ�
	//// �κ��丮 �ִ� ũ�� 4ĭ(������ 4�� ����)
	//// ���׷��̵� �ִ� ũ�� ����(������ �� �ִ� ������ ������ �þ��.

	//*num1ptr = 10;

	SetMemoryAndValue(10);

	
	InventoryPtr = malloc(sizeof(int));
	*InventoryPtr = 0;

	//scanf
	// ctrl + k + s

	/*
	* ���� �߻�
	* throw : �б� ���ܰ� �߻��մϴ�. ������ �־�� �� �ڸ��� �ּҸ� �ְų�, �ּҸ� �־���� �ڸ��� ������ �ʤ������� �߻�
	* �Լ� ����(* �ּҰ� ����� ������,  �Լ� ���� �� ����� �� �� �������ּ���
	* ptr-�ּ�
	*/

	while (1)
	{
		printf("1. �κ��丮�� ���� �����˴ϴ�.\n");
		printf("2.���� �κ��丮�� ũ�⸦ �����մϴ�\n");

		int inputNumber = -1;
		printf("Ű�� �Է����ּ�[��\n");
		scanf_s("%d", &inputNumber);
		while (getchar() != '\n');

		if (inputNumber == 1)
		{
			IncreaseInventoryCount(InventoryPtr, 4);
		}
		else
		{
			ShowInventoryCount(InventoryPtr);
		}
	}


	free(InventoryPtr);
	
}
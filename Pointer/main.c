/*
*  �ۼ��� : 3�� 13�� 
*  �ۼ��� : ��
*  ����   : ������
* 
*/

/*
* �����Ͱ� �����ΰ�?
* �����ʹ� �ּ��̴�.
* ������ ������ : � �����͸� �����ϴ°� �������� ũ��� ��� �Ǵ°�?
* ��ǻ���� ���� : �������->�̸����� ȣ���Ѵ�. / 
*/

/*������ ����
* int number; number ������ ���� ���� �� �� �ִ�. number�� �ּҸ� �����ִ�.
*  �ּҿ����ڸ� ����ؼ� ������ ����ִ� �ּҸ� ����� �� �ִ�. &number;
* ������ �� : & �������� �ּҸ� ����������!, int &number; << �̰� �ȵ�  �ּ� �����ڴ� ������ ���� �ǰ� �� ���Ŀ� ����ؾ���!!!
* 
* �Ѵ� �Ȱ��� ��ȣ�� ����� ��𿡼� ����ϴ��Ŀ� ���� �ٸ�!!
* ������ ������ :ex) int* pointerNumber; //������ ������ ���� �Ҷ� ����ϴ� ��ȣ
* ������ ������ :ex) *pointerNumber;  //������ ������ ����ǰ� �� ���Ŀ� ���Ǵ� ��!!
*/

/* �����͸� ��� ����ϸ� ������!!!?
* ��ǻ�� �ȿ� �޸𸮸� �����ѹ� ����, �޸� �ּҷ� ������ �ϰ� �־���.
* �ּҸ� �˰� ������ ���� ��𼭳� ���� ������ �� �ִ�.
* 
* - ����?  ������ ����� �ΰ� ����� �߾���Ѵ�. ���α׷� �����߿� �޸𸮸� �Ҵ��ϰ� ����ϴ� ���. ������ + �����Ҵ�
* - ���? �Լ����� ����� ���� �ܺο� ������ �ȵȴ�.Call By Reference
* ������ ������ ���.
*/


/*
* ���� 
* ��ǻ���� �ּ� �����.
* 1.������ ������ �����ϴ� ��� int *������ ���� �̸�
* 2.�׳� �����κ��� �ּҸ� �������� ��� : �ּҿ����� int number= 10; -> &number
* 3.�ּҷ� ���� ���� �޾ƿ��� ��� : int* numptr;   ->    *numptr 
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
	// int �ּ�       int 
	// 16���� -0X019451ABC // 10���� ����
	// �ΰ��� Ÿ���� �ٸ���. ���������� ���� ���������Ѵ�!! <�� �̰� �����߿��ߴ�.
	*numberPtr = 100;

}


void SwapPreview(int numA, int numB)
{
	int temp; // �����͸� �ӽ� ������ ����
	temp = numA; // A�� �ӽú���
	numA = numB; // A�� B�� ������ ����
	numB = temp; // B�� temp ������ ����-> temp�� A�� �Ǿ������ϱ� A�� ����

	//�̸������� ����
	printf("swap�� �ϸ� �̷� ����� ���ɴϴ�\n");
	printf("����� numA�� �� : %d\n", numA);
	printf("����� numB�� �� : %d\n", numB);
}

//�ܺο��� ������ ���� �����ϰ� �ʹ� . - > �ּ��� ���� �����Ѵ�.
void Swap(int* num1, int* num2)
{
	int* temp =
	temp = *numA;
	numA = numB;
	numB = temp;

}


 int main()
 {
	printf("�����Ͱ� �����ΰ�?\n");

	//�ǽ� 1. �����Ͱ� �����ΰ�
	int number = 10;

	printf("������� : %d\n", number);
	// �����͸� ��� 16������ ����Ǿ��ִ°� �����ʹ�!
	printf("��������� : %p\n", &number);

	// �ǽ� 2.  ������ ���
	// ��ȣ(����) ����
	// *, & �� �ΰ��� ��ȣ�� ���� ����� ����
    // �����ͺ���
	int* pointerNumber; // ������ ������ ���� �ּҸ� �������ִ� (�ּҰ��� �־������)
	int num1 = 10; // ������ ���� - �ּҰ� ���� ����
	pointerNumber = &num1; //������ ������ ������ �ּҰ��� ����
	printf("��������� : %p\n", &num1);
	printf("������� : %d\n", *pointerNumber);

	//��������. ������ �ǽ�

	// float�� ���� ���� �ϰ� �� ������ �ּҸ� ����غ�����
	
	float floatnum = 0.1f;
	float* floatpointer = &floatnum;
	// �ּҰ� ���
	printf("�ּҰ��� ����غ��� : %p\n", &floatnum);
	printf("�ּҷ� ���� ���� ����ϱ� : %f\n", *floatpointer);

	
	int num2 = 5;
	int* num2Ptr = &num2;

	long long longNum = 100;
	long long* longNumberPtr = &longNum;
	printf("longlong ����\n");
	printf(" �ּҷ� ���� ���� ����Ѵ� : %d\n", *longNumberPtr);
	//char �� 
	char charnum = 'A';
	char* charpointer = &charnum;
    printf("���� �ּҰ��� ��� : %p\n", &charnum);
	printf("�ּҷ� ���� ���� ��� : %c\n\n", *charpointer);

	// Call by value, call by Reference

	printf("call by value, call by reference ����\n");

	int exampleNumber = 10;
	int* exampleNumberPtr = &exampleNumber;
	CallValue(exampleNumber);
	printf("CallValue ���� �� exampleNumber�� �� : %d\n", exampleNumber);
	CallReference(exampleNumberPtr);
	printf("CallValue ���� �� exampleNumber�� �� : %d\n", exampleNumber);

	// swap�� �����غ���.
	// numa, numb ���ִ� , temp���ʿ�
	// ������ ��ȭ�Ǿ� �ִ� ���¸� ����ϰ� �ͽ��ϴ�.
	// �ѹ� �� �� �ֵ��� ����� �����մϴ�.

	// ������ ����� �ϴ� ����
	int weaponLv = 1;
	int weaponBaseAP = 10;
	int weight = 5;

	//

	int weaponPower = weaponLv * weight + weaponBaseAP;
	
	int* saveWeaponData = &weaponPower; //�ּҰ� �����ϱ� �ּ����� &�̰ŷ�
	printf("���� ���ݷ� : %d\n\n", weaponPower);
	printf("���� ���ݷ� : %d\n\n", *saveWeaponData);


	//swap ����

	int numA = 50;
	int numB = 60;
	SwapPreview(numA, numB);
	printf("���� numA, numB�� ��\n");
	printf("numA : %d, numB : %d\n", numA, numB);

	Swap(&numA, &numB);
	printf("swap ���� �� \n");
	printf("���� numA, numB�� ��\n");
	printf("numA : %d,\n numB : %d\n", numA, numB);
}
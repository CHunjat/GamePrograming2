#include "lecture.h"


// �������� 
int GameScore = 0;

void ShowLecture()
{
	printf("���� ���� 1\n");

	int num1 = 10;

	int* numptr = &num1;       // �ּ� = �� 
	
	printf("num1�� ���� ��� : %d\n", num1);
	printf("�ּҸ� ��� : %p\n\n", numptr);

	printf("���� �ǽ� 1.\n"); // �� ������ ���� �����ϴ� �Լ��� �����Ѵ�.

	//int* 2�� �ʿ��ϴ�. int �� �ּҰ� 2�� �ʿ��ϴ�.
	int numA = 5;
	int numB = 6;
	printf("numA�� ��: %d, numB�� �� :%d\n", numA, numB);
	swap(&numA, &numB);
	printf("numA�� ��: %d, numB�� �� :%d\n\n ", numA, numB);

	printf("���� ���� 1. \n\n"); // ������ ȹ���ϴ� �ý����� ���� // Ư���ൿ, �ð��� ���� �����Ҷ�

	IncreaseScore(&GameScore, 10);
	printf("�������� : %d\n\n", GameScore);

	//���� 3���� �����غ�����
	printf("���� �ǽ� 2.\n");
	float weight = 1.5f;
	int WeaponLv = 1;
	int baseAP = 10;

	printf("����ġ :%f, ���� :%d, �⺻���ݷ� : %d\n\n", weight, WeaponLv, baseAP);
	UpgradeWeapon(&WeaponLv, baseAP,&weight);
	printf("����ġ :%f, ���� :%d, �⺻���ݷ� : %d\n\n", weight, WeaponLv, baseAP);

	//���� 
	// �Լ��� �̿��ؼ� ���� �����Ѵ�. �ּҸ� �̿��ؼ� ���� ������ �� �ִ�.
	// ���� �ּҸ� ����ұ�? 1. �ܺ��� ���� ���� �ؾ��� ��, 2. �����;� �� ������ Ÿ���� �ʹ� Ŭ �� �ּҸ����� ������ �� �ִ�. 


	//�������� ������ ������Ű�� �Լ��� ��������
	printf("���� �ǽ� 3.\n");
	int itemA = 1;
	int itemB = 2;
	increaseItem(&itemA, 1);





	//���� ���ݷ��� ������Ű�� �Լ�
	//���� �Լ��� ������ �� ������?


}

void swap(int* a, int* b)
{
	int temp = *a; // a�� �ּ��ε�, �ּҷ� ���� ���� �������� ������ (&) temp�� ���� 5��� ���ڰ� ����Ǿ��ִ�.
	*a = *b; // *�����ͺ��� = �� : �ǹ̴� a�� �ּҿ� ���� �����ض�! ��¶�
	*b = temp;         // *b : b�� �ּҿ� ����Ǿ��ִ� ���� �ҷ��Ͷ�
	         // 1. (*b - > 6)    //  2.  (*a = 6)  // 3. (numA = 6) 
}

void IncreaseScore(int* score, int points)
{
	//GameScore��¾��� �ּҸ� �޾ƿ���
	// *�ּ� ���� = ��; �ܺο� �ִ� GameScore ���� ����ȴ�.

	*score += points;
}

void UpgradeWeapon(int* weaponLv, int baseAP, float* weight)
{
	//������ 1���� ��Ų��.
	// ����ġ�� Ư�� �������� �����Ѵ�.

	*weaponLv += 4;
	if (*weaponLv % 5 == 0)
	{
		*weight = *weight * 1.5f;
	}

	printf(" ���� ���� ���ݷ� : %f\n", *weaponLv * *weight + baseAP);
}

void increaseItem(int* itemA, int itemB)
{
	*itemA += 8;
	if (*itemA % 10 > 0)
	{
		printf(" itemA : %d\n, itemB :%d\n", *itemA, itemB + *itemA);
	}

}

#include <stdio.h>
#include "item.h"


/* 
* �ۼ��� : 2025.3.18.
* �ۼ��� : �赿��
* ����   : �迭�� ������!
*/

/*
* 1. �迭(Array) : �� ����, ��� ����ϴ°�?
* ���� : ����ǥ , (������) ��� �м� �ϴ� ���α׷��� �����?
* ��� ���� : �ϳ��� ������ ���� Ÿ���� ������ ǥ���� �� �ִ�.
*/

/*
* ����(character)  '�ܾ�' , 'a'p'p'l'e'
*/

int main()
{
	printf("�迭�� ������\n");

	printf("�迭 ���� : ����ǥ �����\n");
	int scoreA = 80; //����
	int	scoreB = 60; //����
	int	scoreC = 40; //����

	// ���� : '������ Ÿ��'���� ������ ����� - �޸��� ����Ǵ� ũ��, 010101�ؼ��ϴ� ���, �����ϴ� �޸� �ּ�
	// ���� Ÿ���� ������ �ϳ��� �̸����� ǥ���ϴ� ��� (�迭)

	int scores[3] = { 80,60,40 }; // �迭�� ���� int������ Ÿ���� 3�� �����ϴ� scores�̸��� ����
	scores[0]; // scores�ּ� + 0 = �ڱ� �ڽ� 
	scores[1]; // scores�ּ� +1 = 2��° ���� 60���̵ǰ���?
	scores[2]; // 

	printf("������ ������� ����ϼ���\n");
	for (int i = 0; i < 3; i++)
	{
		printf("���� : %d\n\n", scores[i]);
	}

	//printf("���� : %d, ���� : %d, ���� : %d\n", scoreA, scoreB, scoreC);

	// ������ ����
	// ������ �̸�(���ڿ�), ������ ����, ������ Index

	char itemName1[10] = "AAA";  // char A x3 - ���ڵ��� �迭 - ���ڿ�
	int item1Count = 1;
	int itemIndex = 1;  // 1������ ����Ϸ��� -1�������


	printf("����\n\n");
	printf("������1���� ����\n");
	printf("������ ��ȣ :%d\n, ������ �̸� :%s\n, ������ ���� :%d\n", itemIndex, itemName1, item1Count);

	//�������� ������ �����Ѵ�. (������ �ʴ� ������ ���� ������, ���̺� ������)



	ShowALLitemInfo();

	printf("���ڿ��� ���� ����\n\n");

	// ���(apple) ���ڷ� ����غ���
	char char1 = 'a';
	char char2 = 'p';
	char char3 = 'p';
	char char4 = 'l';
	char char5 = 'e';

	// apple is red
	// ���ڿ����� �������� ���鹮�ڸ� ����ؼ� �� ������ �������� �˸���.

	printf("%c%c%c%c%c\n\n", char1, char2, char3, char4, char5);

	char chars[5] = { 'a','p','p','l','e' };
	
	for (int i = 0; i < 5; i++)
	{
		printf("%c", chars[i]);
	}

	printf("\n\n");
	char scoreName[10] = "����\n"; // �������� �ǹ̰� �������ְ�, 16���� �ּҷ� �����ϰ� �־���.
	printf("%s", scoreName); // %s << string

	char scoreName2[10] = "English"; // �迭�� ���������� ����ִ°��� ������ ������ ������ ��� �Ǵ°� int type = 0 ����

	printf("%c\n", scoreName2[0]);
	printf("%c\n", scoreName2[1]);
	printf("%c\n", scoreName2[2]);
	printf("%c\n", scoreName2[3]);
	printf("%c\n", scoreName2[4]);
	printf("%c\n", scoreName2[5]);
	printf("%c\n", scoreName2[6]);


	// "����" -���ڿ� �޸� �ּ� | �� | �� |
	// �޸��� ù��° �ּҸ� �˰�, �޸��� ũ�⸦ �˸� ���ڸ� �ѹ��� ����� �� �ִ�.
	// "��" �����ּҷ� ������ �Ǿ� �ִ�.
	


	// �迭�� ������ �ּ��̴�. ��� �迭�� �ּҿ���!
	char* scorePtr = "Math";
	printf("�̸� : %s\n\n", scorePtr); // ������!!
	printf("%c\n", *(scorePtr + 0)); // Math "M"�����ϴ� �ּ� - scorePtr(1byte) ũ����
	printf("%c\n", *(scorePtr + 1));
	printf("%c\n", *(scorePtr + 2));
	printf("%c\n", *(scorePtr + 3));

	// �� �迭�� �ּҷ� �����͸� �����ϰ� ������?
	// �ִ����� ȿ���� �޸𸮸� ����ϱ� ���ؼ���!
	// �ּ� +1 + 2 + 3 + 4 + 5 (50�ܾ�)
	printf("\n\n");

	int number[10]; // 10��ǥ�� 4x10 16����Ʈ�� ����

    // �������� �̸��� ǥ���ϴ� ���
	// �ܾ��� �迭�� ǥ���ϴ� ���

	char itemName[10] = "�̸�"; // ������ 10ĭ����°���
	char* itemNamePtr = "�̸�2"; // �ּ���ü�� �ְ�

	printf("%s\n,%s\n", itemName, itemNamePtr);

	ItemExample();




}




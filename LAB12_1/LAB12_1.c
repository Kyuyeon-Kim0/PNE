#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	// int scores[5] = { 71, 80, 90,85, 95 };
	int total = 0, avg;
	/*
	scores[0] = 71;
	scores[1] = 80;
	scores[2] = 90;
	scores[3] = 85;
	scores[4] = 95;
	*/

	int scores[40];		// �ִ� ������ ũ�� ����
	int num;

	printf("Enter the number of scores(0 < number <= 40): ");
	scanf("%d", &num);

	//for ���� ����Ͽ� �Է�
	for (int i = 0; i < num; i++) {
		printf("Enter a score: ");
		scanf("%d", &scores[i]);
	}

	printf("---------------------------------\n");

	//for ���� ����Ͽ� total ���
	for (int i = 0; i < num; i++)
		total += scores[i];
		
	//average ���
	avg = total / num;
		
	//total�� average ���
	printf("Total: %d\n", total);
	printf("Average: %d\n", avg);

	//for ���� ����Ͽ� ���� ���
	for (int i = 0; i < num; i++)
		printf("%d ", scores[i]);
	printf("\n");

	return 0;
}
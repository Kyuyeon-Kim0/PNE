#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	int scores[7];
	int best;

	// ������ �б� ���� for ��
	for (int i = 0; i < 7; i++) {
		printf("Enter the income : ");
		scanf("%d", &scores[i]);
	}

	printf("---------------------------------\n");

	// �ְ� ���� ��� ���� for ��
	best = scores[0];
	for (int i = 1; i < 7; i++)
		if (best < scores[i])
			best = scores[i];

	// �ְ� ���� ���
	printf("The best income is %d\n", best);

	// ���� ����� ���� for ��
	printf("Incomes are\n");
	for (int i = 0; i < 7; i++)
		printf("%d ", scores[i]);
	printf("\n");

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	int scores[7];
	int best;

	// 수입을 읽기 위한 for 문
	for (int i = 0; i < 7; i++) {
		printf("Enter the income : ");
		scanf("%d", &scores[i]);
	}

	printf("---------------------------------\n");

	// 최고 수입 계산 위한 for 문
	best = scores[0];
	for (int i = 1; i < 7; i++)
		if (best < scores[i])
			best = scores[i];

	// 최고 수입 출력
	printf("The best income is %d\n", best);

	// 수입 출력을 위한 for 문
	printf("Incomes are\n");
	for (int i = 0; i < 7; i++)
		printf("%d ", scores[i]);
	printf("\n");

	return 0;
}
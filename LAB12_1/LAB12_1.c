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

	int scores[40];		// 최대 개수로 크기 설정
	int num;

	printf("Enter the number of scores(0 < number <= 40): ");
	scanf("%d", &num);

	//for 문을 사용하여 입력
	for (int i = 0; i < num; i++) {
		printf("Enter a score: ");
		scanf("%d", &scores[i]);
	}

	printf("---------------------------------\n");

	//for 문을 사용하여 total 계산
	for (int i = 0; i < num; i++)
		total += scores[i];
		
	//average 계산
	avg = total / num;
		
	//total과 average 출력
	printf("Total: %d\n", total);
	printf("Average: %d\n", avg);

	//for 문을 사용하여 성적 출력
	for (int i = 0; i < num; i++)
		printf("%d ", scores[i]);
	printf("\n");

	return 0;
}
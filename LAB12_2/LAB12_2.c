#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
int main(void)
{
	// 변수 선언
	int data[10];
	int i, sum = 0, avg;

	srand(time(NULL));

	// 난수를 배열에 넣기 위한 for문
	for (i = 0; i < 10; i++)
		data[i] = rand() % 100;

	//배열의 평균 구하기
	for (i = 0; i < 10; i++)
		sum += data[i];
	avg = sum / 10;
	printf("평균은 %d\n", avg);

	// 배열 출력을 위한 for	문
	for (i = 0; i < 10; i++)
		printf("%d ", data[i]);
	printf("\n");

	return 0;
}
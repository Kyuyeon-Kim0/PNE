#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
int main(void)
{
	// ���� ����
	int data[10];
	int i, sum = 0, avg;

	srand(time(NULL));

	// ������ �迭�� �ֱ� ���� for��
	for (i = 0; i < 10; i++)
		data[i] = rand() % 100;

	//�迭�� ��� ���ϱ�
	for (i = 0; i < 10; i++)
		sum += data[i];
	avg = sum / 10;
	printf("����� %d\n", avg);

	// �迭 ����� ���� for	��
	for (i = 0; i < 10; i++)
		printf("%d ", data[i]);
	printf("\n");

	return 0;
}
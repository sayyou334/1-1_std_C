
//�л����� ���� ������ ��� ó���ϴ� ���α׷�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CLASSP 10
#define TEST 3



int main(void)
{
	int score[CLASSP][TEST] = { 0 };
	srand((unsigned)time(NULL));


	for (int i = 0; i < CLASSP; i++)
	{
		for (int j = 0; j < TEST; j++)
		{
			score[i][j] = 0 + rand() % 100 + 1;
		}
	}


	for (int k = 0; k < TEST; k++)
	{
		int max = 0, min = 100;
		for (int j = 0; j <CLASSP; j++)
		{
			if (max < score[j][k])
			{
				max = score[j][k];
			}


			if (min > score[j][k])
			{
				min = score[j][k];
			}
		}
		printf("����#%d�� �ִ����� %d, �ּ����� %d\n", k + 1, max, min);

	}


	return 0;
}
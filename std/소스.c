
//������ �迭�� �̿��� ����� ǥ��
//A,B �� ���� ����� ��Ҹ� ���� ���� C��� ����� ����� ����ϴ� ���α׷��� �ۼ�
//A,B,C�� 3*3 ������ �迭�� �̿�

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define ROWS 3
#define COLS 3


int main(void)
{
	int A[ROWS][COLS] = { {2,3,0}, {8,9,1},{7,0,5} };
	int B[ROWS][COLS] = { {1,0,0} ,{1,0,0},{1,0,0} };
	int C[ROWS][COLS];

	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}

	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}
	return 0;
}
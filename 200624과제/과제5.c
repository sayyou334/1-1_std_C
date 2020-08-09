
//다차원 배열을 이용한 행렬의 표현
//A,B 두 개의 행렬의 요소를 각각 더해 C라는 행렬을 만들어 출력하는 프로그램을 작성
//A,B,C는 3*3 다차원 배열을 이용

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
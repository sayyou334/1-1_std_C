
//성적기록표 2차원 배열에 저장 후 최종 성적 계산

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define CLASS 3
#define SCORE 5

int main(void)
{
	int A[CLASS][SCORE] = { { 87,98,80,76,3 }, { 99,89,90,90,0 }, { 65,68,50,49,0 } };
	double finalscore = 0;

	for (int i = 0; i < CLASS; i++)
	{
		finalscore = A[i][0] * 0.3 + A[i][1] * 0.3 + A[i][2] * 0.2 + A[i][3] * 0.1 - A[i][4];
		printf("학생#%d의 최종성적은 %.2f입니다.\n", i + 1, finalscore);
	}

	return 0;
}
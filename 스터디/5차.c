
/*
//문제1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int rotto[6] = { 0 };
	int n = 0, check = 0;
	srand((unsigned)time(NULL));

	printf("로또 번호 생성기\n");
	printf("▶계속하려면 아무키나 입력하세요\n\n\n");
	printf("────── [ 금주의 추천 번호 ] ──────\n");
	for (int i = 0; i < 6; i++)
	{
		// 랜덤함수 발생
		n = 1 + rand() % 45 + 1;

		for (int y = 0; y < i; y++)
		{
			// 배열 a의 y번째 인덱스의 값이 발생된 난수의 값과 같을 때 (즉 중복)
			if (rotto[y] == n)
			{
				i -= 1; // i의 값을 -1 해준다. 즉 배열 a의 인덱스를 -1 해준다.
				check = 1; // 중복인지를 검사하는 변수의 값을 1로 바꾸어 중복인것을 표시
			}
		}
		// 중복 변수가 중복이 아닐때 (즉, 0) 배열 a의 인덱스 i 번째에 발생된 난수의 값을 대입
		if (check == 0)
		{
			rotto[i] = n;
		}
		else
		{
			check = 0; // 중복 변수가 1이 되었을때 중복 변수를 다시 0으로 초기화
		}
	}

	for (int i = 0; i < 6; i++)
	{
		printf("  %d  ", rotto[i]);
	}
	printf("\n──────────────────────────────────\n");

	return 0;
}
*/









	/*
	for (int i = 0; i < 6; i++)
	{
		rotto[i] = 1 + rand() % 46;
		for (int j = 0; j < 6; i++)
		{

		}


		printf("  %d  ", rotto[i]);
	}

for (int i = 0; i < MAX_SIZE; i++)
{
	// 랜덤함수 발생
	n = rand() % 100 + 1;

	for (int y = 0; y < i; y++)
	{
		// 배열 a의 y번째 인덱스의 값이 발생된 난수의 값과 같을 때 (즉 중복)
		if (num[y] == n)
		{
			i -= 1; // i의 값을 -1 해준다. 즉 배열 a의 인덱스를 -1 해준다.
			check = 1; // 중복인지를 검사하는 변수의 값을 1로 바꾸어 중복인것을 표시
		}
	}
	// 중복 변수가 중복이 아닐때 (즉, 0) 배열 a의 인덱스 i 번째에 발생된 난수의 값을 대입
	if (check == 0)
	{
		num[i] = n;
	}
	else
	{
		check = 0; // 중복 변수가 1이 돼었을때 중복 변수를 다시 0으로 초기화
	}
}
*/

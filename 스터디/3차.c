

/*
//1~100까지의 수 중, 5의 배수이면서 3의 배수인 숫자 출력
#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 5 != 0)
			continue;
		else if (i % 3 != 0)
			continue;

		printf("%d\n", i);
	}

	return 0;
}
*/




/*
//for문을 사용해 학생 5명의 성적을 입력받는 프로그램
#include <stdio.h>

int main(void)
{
	int sum = 0, A[5];
	double avg=0;


	for (int i = 0; i <=4; i++)
	{
		
		printf("%d번 학생의 C언어 점수 : ",i+1);
		scanf("%d", &A[i]);

		sum += A[i];
		avg = sum / 5;
	}

	

	printf("===========성적표===========\n");
	printf("  총 합계 : %d\n", sum);
	printf("  평균 : %.1f\n", avg);
	printf("============================");

	return 0;
}
*/









//배스킨라빈스 프로그램

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int player = 0, computer = 0;
	int num = 0;
	int brea=0;
	srand((unsigned)time(NULL));


	printf("┌──────────────────┐\n");
	printf("│  배스킨라빈스31 게임 │\n");
	printf("└──────────────────┘\n\n");
	printf(" GAME START!\n");
	printf("※ 1부터 3까지의 수를 입력하시오.\n");


	while (1)
	{
		printf("\n[사용자] 몇 개의 수를 입력하겠습니까? : ");
		scanf("%d", &player);

		if (player > 3 || player <= 0)
		{
			printf("※ 1부터 3까지의 숫자만 입력하시오\n\n");
			continue;
		}

		for (int i = 1; i <= player; i++)
		{
			num++;
			if (num <= 31)
			{
				printf("%d ", num);
			}
		}
			if (num >= 31)
			{
				printf("\n★★★ computer win! ★★★\n");
				brea = 1;
				break;
			}

			computer = (rand() % 3 + 1);
			printf("\n[컴퓨터] :  %d\n", computer);

			for (int i = 0; i < computer; i++)
			{
				num++;
				if (num <= 31)
				{
					printf("%d ", num);
				}
			}
				if (num >= 31)
				{
					printf("\n★★★ player win! ★★★\n");
					brea = 1;
					break;
				}
		if (brea == 1)
		{
			break;
		}
	}
	return 0;
}









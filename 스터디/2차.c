/*

//1부터 입력 받은 숫자 사이에 존재하는 홀수를 구하는 프로그램을 작성해라.
#include <stdio.h>
int main(void)
{

	
	int num;
	printf("수를 입력하시오");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
	{

		if (i%2  !=0 )
			printf("%d ", i);

	}
	*/



	/*
	//for문을 사용해 1부터 계속 더하다가 합이 300이 넘으면 덧셈을 중지하고
	//그때까지의 합과 마지막으로 더해진 수를 구하는 프로그램작성

	int i=1, sum=0;
	{
		for ( ;i < 300; i++)
		{
			sum = sum + i;
			if (sum > 300)
			{
				break;

			}
		}
		printf("총 합은 %d이고 마지막으로 더해진 수는 %d입니다.", sum, i);

	}
	return 0;
}
*/



	//for문을 사용해 사용자가 원하는 층수의 피라미드를 출력하는 프로그램을 작성하라.
	//3개의 for문 사용
	//공백의 개수 = 입력 받은 값 - 현재 행의 값
	//별의 개수 =현재 행의 값*2-1 (바깥쪽for문의 값)

#include <stdio.h>
int main(void)
{

	
	int f;
	printf("층수를 입력하시오");
	scanf("%d", &f);
	

	for (int x = 1; x <= f; x++)   
	{
		for (int y = f; y >=x-1; y--)
		{
			printf(" ");
		}
				//공백수 결정지음 int y = f-1  /  y >=x-1
			
		for (int z = 1; z <= x*2-1; z++)
		{
			printf("*");
		}	
				//별개수 결정지음 x*2-1
		printf("\n");   //행
	}


	return 0;
}
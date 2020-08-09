

/*
//문제1
#include <stdio.h>

int main(void)
{
	int days[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };

	for (int i = 0; i < 12; i++)
	{
		printf("%d월은 %d일까지 있습니다.\n", i+1, days[i]);
	}
	return 0;
}
*/




/*
//문제2
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main(void)
{
	int max = 0, min = 0;
	int num[SIZE] = { 0 };
	srand((unsigned)time(NULL));

	for (int i = 0; i < SIZE; i++)
	{
		num[i] = rand();
	}

	max = num[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (max< num[i])
		{
			max = num[i];
		}
	}

	min = num[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (min> num[i])
		{
			max = num[i];
		}
	}

	printf("최소값은 %d\n", max);
	printf("최대값은 %d", min);

	return 0;
}
*/




/*
//문제3
#include <stdio.h>
#define SIZE 10

void array_print(int a[], int size);
int array_equal(int a[], int b[], int size);
int main(void)
{
	int a[SIZE] = { 0 };
	int b[SIZE] = { 0 };

	while (1)
	{
		int a[SIZE] = { 1, 2, 3 };
		int b[SIZE] = { 0 };
		array_print(b, 10);
		array_print(a, 10);
		if (array_equal(a, b, SIZE) == 1)
			printf("2개의 배열은 같음 \n");
		else
			printf("2개의 배열은 다름 \n");
		return 0;
	}
	return 0;
}

int array_equal(int a[], int b[], int size)
{
	int i;
	for (i = 0; i < size; i++) {
		if (b[i] != a[i])
			return 0;
	}
	return 1;
}

void array_print(int a[], int size)
{
	int i;
	for (i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}
*/





/*
//문제4 : 배열 a를 b에 복사하기
#include <stdio.h>
#define SIZE 10

void array_copy(int a[], int b[], int size);
int main(void)
{
	int a[SIZE] = { 0 };
	int b[SIZE] = { 0 };

	printf("배열 a의 원소를 입력하시오(크기는 10)  ");
	for (int i = 0; i < SIZE; i++)
	{
		scanf("%d", &a[i]);								//배열 값 입력받기
	}
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d  ", a[i]);							//배열 a출력하기
	}
	printf("\n");

	array_copy(a, b, SIZE);						//배열 a를 b로 복사하는 함수 호출
}

void array_copy(int a[], int b[], int size)
{
	for (int i = 0; i < SIZE; i++)
	{
		b[i] = a[i];
		printf("%d  ", b[i]);				//복사된 배열 b 출력
	}
}
*/






/*&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&이해하기
//문제5 : 난수를 100번 생성해서 가장 많이 생성된 수 출력	(빈도구하기)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main (void)
{

	int max;
	int a[SIZE] = { 0 };
	srand((unsigned)time(NULL));

	for (int i = 0; i < 100; i++)
	{
		a[rand() % 10]++;
	}

	for (int i = 0; i < SIZE; i++)
	{
		printf("a[%d]=%d\n", i, a[i]);
	}

	max = 0;

	for (int i = 1; i < SIZE; i++)
	{
		if (a[i] > a[max])
			max = i;
	}

	printf("가장 많이 생성된 수는 %d 입니다.\n", max);

	return 0;
}




#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main(void)
{
	int random[SIZE] = { 0 };
	int count=0;
	srand((unsigned)time(NULL));


	for (int i = 0; i < 100; i++)
	{
		random[rand() % 10]++;		//난수 100개 숫자를 받음
		printf("%d ", random[i]);
	}

	printf("\n가장 많이 나온 수 :");
	for (int i = 1; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (random[i] < random[j])
			{
				count = random[j];
			}
		}
	}
	printf(" %d  ", count);

	return 0;
}
*/

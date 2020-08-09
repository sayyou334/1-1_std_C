


/*
printf("%u");		=포인터 주소값은 %u로 받는다.
*/

/*
#include <stdio.h>

int main(void)
{
	int i = 10;
	char c = 69;
	float f = 12.3;

	printf("i의 주소 : %u\n", &i);
	printf("c의 주소 : %u\n", &c);
	printf("f의 주소 : %u\n", &f);

	return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
	int i = 10;
	int* p;
	p = &i;
	printf("%d", *p);

	return 0;
}
*/



/*
#include <stdio.h>

int main(void)
{
	int x = 10, y = 20;
	int* p;

	p = &x;
	printf("p=%d\n", p);
	printf("x=%d\n", &x);

	printf("*p=%d\n", *p);

	printf("*p=%d\n", &p);
	printf("*p=%u\n", &p);

	p = &y;
	printf("\np=%d\n", p);
	printf("*p=%d\n", *p);

	int a = 1023;
	printf("\n%u", a);


	return 0;
}
*/



/*
#include <stdio.h>

void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int a = 10, b = 20;
	printf("%d %d\n", a, b);
	swap(&a, &b); // void형, tmp.
	printf("%d %d", a, b);

	return 0;
}
*/





/*
#include <stdio.h>

void increment(int* p);
void changesign(int* p);
int main(void)
{
	int input;
	printf("정수를 입력하시오 : ");
	scanf("%d", &input);
	increment(&input);
	printf("increment()호출 후 %d\n", input);
	changesign(&input);
	printf("changesign()호출 후 %d\n", input);

	return 0;
}

void increment(int* p)
{
++(*p);
}

void changesign(int* p)
{
-(*p);
}
*/





/*
#include <stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff);
int main(void)
{
	int num1, num2;
	int sum = 0, diff = 0;

	printf("두 개의 정수를 입력하세요");
	scanf("%d %d", &num1, &num2);

	get_sum_diff(num1, num2, &sum, &diff);
	printf("두 수의 합은 %d ", sum);
	printf("두 수의 차는 %d ", diff);

	return 0;
}

void get_sum_diff(int x, int y, int* p_sum, int* p_diff)
{
	*p_sum = x + y;
	*p_diff = x - y;
}
*/





/*
#include <stdio.h>

int main(void)
{
	int i = 10;
	int* pi = &i;

	printf("i = %d, pi = %u\n", i, pi);
	(*pi)++;
	printf("i = %d, pi = %u\n", i, pi);
	printf("i = %d, pi = %u\n", i, pi);
	*pi++;
	printf("i = %d, pi = %u\n", i, pi);

	return 0;
}
*/



/*
#include <stdio.h>

int main(void)
{
	int a[] = { 10,20,30,50,60 };

	printf("&a[0] = %u\n", &a[0]);
	printf("&a[1] = %u\n", &a[1]);
	printf("&a[2] = %u\n", &a[2]);

	printf("a = %u", a);

	return 0;
}
*/



/*
#include <stdio.h>

int main(void)
{
	int a[] = {10,20,30,40,50};

	printf("a = %u\n", a);
	printf("a + 1 = %u\n", a+1);
	printf("*a = %d\n", *a);
	printf("*(a+1) = %d", *(a + 1));

	return 0;
}
*/





/*
#include <stdio.h>
void sub(int b[], int n);

int main(void)
{
	int a[3] = { 1,2,3 };

	printf("%d %d %d\n", a[0], a[1], a[2]);
	sub(a, 3);
	printf("%d %d %d\n", a[0], a[1], a[2]);
	return 0;
}

/*
//아래 3개는 다 같음 배열=포인터 
void sub(int b[], int n)
{
	b[0] = 4;
	b[1] = 5;
	b[2] = 6;
}


void sub(int* b, int n)
{
	*(b) = 4;
	*(b + 1) = 5;
	*(b + 2) = 6;
}

void sub(int* b, int n)
{
	*(b) = 4;
	*(b + 1) = 5;
	*(b + 2) = 6;
}
*/





/*
#include <stdio.h>

void array_add(int* A, int* B, int* C, int size);
int main(void)
{
	int A[10] = { 200, 100, 150, 200, 100, 150, 160, 170, 180, 200 };
	int B[10] = { 50, 20, 30, 0, 10, 30, 50, 10, 20, 10 };
	int C[10] = { 0 };

	array_add(A, B, C, 10);
	printf("C[]배열 :    ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", C[i]);
	}

	return 0;
}

void array_add(int* A, int* B, int* C, int size)
{
	for (int i = 0; i < size; i++)
	{
		C[i] = A[i] + B[i];
	}
}
*/



/*
// 현재학점 / 최대학점 * 100;
#include <stdio.h>

void convert(double* grades, double* scores, int size);
int main(void)
{
	double grades[10] = { 3, 4.1, 4, 2, 2.6, 3.2, 3, 2.5, 3.3, 4.3 };
	double scores[10] = { 0 };

	convert(grades, scores, 10);
	printf("100점 만점 변환 점수\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%.2f   ", scores[i]);
	}

	return 0;
}

void convert(double* grades, double* scores, int size)
{
	for (int i = 0; i < size; i++)
	{
		scores[i] = grades[i] / 4.3 * 100;
	}
}
*/



/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void array_fill(int* A, int size);
int main(void)
{
	int A[6] = { 0 };
	array_fill(A, 6);
	for (int i = 0; i < 6; i++)
	{
		printf("%d  ", A[i]);
	}
	return 0;
}

void array_fill(int* A, int size)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < size; i++)
	{
		A[i] = rand() % 100;
	}
}
*/




/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void array_print(int* A, int size);
int main(void)
{
	int A[6] = { 0 };
	array_print(A, 6);
	printf("A[] = {");
	for (int i = 0; i < 6; i++)
	{
		printf(" %d  ", A[i]);
	}
	printf("}");

	return 0;
}

void array_print(int* A, int size)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < size; i++)
	{
		A[i] = rand() % 100;
	}
}
*/





/*
#include <stdio.h>

void changesign(int* n);
void increment(int* n);
int main(void)
{
	printf("정수를 입력하세요 ");
	int n;
	scanf("%d", &n);
	increment(&n);
	printf("increment() 호출 후 %d \n", n);
	changesign(&n);
	printf("changesign() 호출 후 %d", n);
	return 0;
}

void increment(int* n)
{
	(*n)++;
}

void changesign(int* n)
{
	*n*=-1;
}
*/



/*
#include <stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff);
int main(void)
{
	int n1, n2;
	int sum = 0;
	int diff = 0;
	printf("두 개의 정수를 입력하세요");
	scanf("%d %d", &n1, &n2);
	get_sum_diff(n1, n2, &sum, &diff);
	printf("두 수의 합은 %d\n", sum);
	printf("두 수의 차는 %d", diff);

	return 0;
}

void get_sum_diff(int x, int y, int* p_sum, int* p_diff)
{
	*p_sum = x + y;
	*p_diff = x - y;
}
*/



/*
#include <stdio.h>
void get_sum_diff(int x, int y, int* p_sum, int* p_diff);
int main(void)
{
	int n1, n2;
	int sum = 0, diff = 0;
	printf("두개의 원소 입력");
	scanf("%d %d", &n1, &n2);
	get_sum_diff(n1, n2, &sum, &diff);
	printf("원소들의 합=%d\n", sum);
	printf("원소들의 차=%d", diff);

	return 0;
}

void get_sum_diff(int x, int y, int* p_sum, int* p_diff)
{
	*p_sum = x + y;
	*p_diff = x - y;
}
*/



/*
#include <stdio.h>

int main(void)
{
	int i = 10;
	int* p;
	p = &i;
	printf(" %d", *p); 
	printf(" \n%d", p);
	return 0;
}
*/



/*
#include <stdio.h>

void swap(int* a, int* b)
{
	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int main(void)
{
	int a = 100, b = 200;
	swap(&a, &b);
	printf("%d %d", a, b);

	return 0;
}
*/


/*
#include <stdio.h> 
int main(void)
{
	int a[] = { 10, 20, 30, 40, 50 };

	printf("a = %u\n", a);
	printf("a + 1 = %u\n", a + 1);
	printf("*a = %d\n", *a);
	printf("*(a+1) = %d\n", *(a + 1));

	//a = 1245008
	//a + 1 = 1245012
	//* a = 10
	//* (a + 1) = 20
	return 0;
}
*/



/*
#include <stdio.h>
void array_add(int* A, int* B, int* C, int size)
{
	int i;
		for (i = 0; i < size; i++)
		{
			C[i] = A[i] + B[i];
		}
}
int main(void)
{
	int A[10] = { 200, 100, 150, 200, 100, 150, 160, 170, 180, 200 };
	int B[10] = { 50, 20, 30, 0, 10, 30, 50, 10, 20, 10 };
	int C[10] = { 0 };
	array_add(A, B, C, 10);
	printf("C배열 :  ");
	for (int i = 0; i < 10; i++)
	{
		printf(" %d ", C[i]);
	}
	return 0;
}
*/


/*
// 현재학점 / 최대학점 * 100;
#include <stdio.h>

void convert(double* grades, double* scores, int size)
{
	for (int i = 0; i < size; i++)
	{
		scores[i] = grades[i] / 4.3 * 100;
	}
}
int main(void)
{
	double grades[10] = { 3, 4.1, 4, 2, 2.6, 3.2, 3, 2.5, 3.3, 4.3 };
	double scores[10] = { 0 };

	convert(grades, scores, 10);
	int i;
	for (i = 0; i < 10; i++)
	{
		printf(" %.2f ", scores[i]);
	}
	return 0;
}
*/


/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Size 10

void array_fill(int* A, int size)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < size; i++)
	{
		A[i] = 1 + rand() % 100;
	}
}
int main(void)
{
	int A[Size] = { 0 };
	array_fill(A, Size);
	for (int i = 0; i < Size; i++)
	{
		printf("%d ", A[i]);
	}
	return 0;
}
*/








/*
#include <stdio.h>

int main(void)
{


	return 0;
}
*/
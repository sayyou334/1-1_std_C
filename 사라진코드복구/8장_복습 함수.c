

/*
//문제1
#include <stdio.h>

double square(double zegop);
int main(void)
{
	double num;

	printf("정수를 입력하시오 :  ");
	scanf("%lf", &num);
	printf("주어진 정수 %f의 제곱은 %f입니다.", num, square(num));

	return 0;
}


double square(double zegop)
{
	int x = 1;
	x = zegop * zegop;
		return x;
}
*/




/*
//문제2
#include <stdio.h>

void check_alpha(wd);
int main(void)
{
	char wd;
	
	printf("문자를 입력하시오 :  ");
	scanf("%c", &wd);
	check_alpha(wd);

	return 0;
}

void check_alpha(wd)
{
	if(wd>=97 && wd<=122)
	{
		printf("%c는 알파벳 문자입니다.",wd);
	}
	else
	{
		printf("%c는 알파벳 문자가 아닙니다.",wd);
	}
}
*/



/*
//문제3
#include <stdio.h>
#define PI 3.141592

double cal_area(double radius);
int main(void)
{
	double r;

	printf("원의 반지름을 입력하시오 :  ");
	scanf("%lf", &r);
	printf("원의 면적은 %f입니다.", cal_area(r));

	return 0;
}

double cal_area(double radius)
{
	return radius * radius * PI;
}
*/



/*
//문제4
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void is_leap(int year);
int main(void)
{
	int year;

	printf("연도를 입력하시오:  ");
	scanf("%d", &year);
	is_leap(year);

	return 0;
}

void is_leap(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("%d년은 윤년으로 366일 입니다.", year);
	}
	else
	{
		printf("%d년은 평년으로 365일 입니다.", year);
	}
}
*/




/*
//문제5
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void round(double f);
int main(void)
{
	double sil;
	printf("실수를 입력하시오 :  ");
	scanf("%lf", &sil);
	round(sil);

	return 0;
}

void round(double f)
{
	int up = (int)(f + 0.5);
	printf("반올림한 값은 %d입니다.", up);
}
*/




/*
//문제6
//주어진 정수가 짝수이면 1을 반환하고 홀수이면 0을 반환하는 함수 int even(int n)
//주어진 정수의 절대값을 구하는 함수 int absolute(int n)
//주어진 정수가 음수이면 -1을, 양수이면 1을 1이면 0을 반환하는 함수 int sign(int n)

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int even(int n);
int absolute(int n);
int sign(int n);
int main(void)
{
	int num;

	printf("정수를 입력하시오 : ");
	scanf("%d", &num);

	if(even(num)==1)
	{
		printf("even()의 결과 :  짝수\n");
	}
	else if (even(num) == 0)
	{
		printf("even()의 결과 :  홀수\n");
	}
	else
	{
		printf("even()의 결과 :  0\n");
	}

	printf("absolute()의 결과 :  %d\n", absolute(num));


	if (sign(num) == -1)
		printf("sign()의 결과 :  음수\n");
	else if (sign(num) == 0)
		printf("sign()의 결과 :  0\n");
	else if (sign(num) == 1)
		printf("sign()의 결과 :  양수\n");


	return 0;
}

int even(int n)
{
	if(n%2==0)
	{
		return 1;
	}
	else if (n == 0)
	{
		return 2;
	}
	else
	{
		return 0;
	}
}

int absolute(int n)
{
	int abs;
	if (n < 0)
		abs = -(n);
	else
		return n;
}

int sign(int n)
{
	if (n < 0)
		return -1;
	else if (n == 0)
		return 0;
	else if (n > 0)
		return 1;
}
*/



/*
//문제7
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void get_tax(int income);
int main(void)
{
	int income;

	printf("소득을 입력하시오(만원) : ");
	scanf("%d", &income);
	get_tax(income);

	return 0;
}


void get_tax(int income)
{
	int tax=0;

	if (income > 1000)
	{
		tax = ((income - 1000) * 0.1)+1000*0.08;
	}
	else if (income <= 1000)
	{
		tax = income * 0.08;
	}
	printf("소득세는 %d입니다.", tax);
}
*/



/*
//문제9
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS


int main(void)
{
	srand((unsigned)time(NULL));

	for (int i = 1; i <= 10; i++)
	{
		int rands = 0;
		for (int j = 1; j <= 1; j++)
		{
			rands = rand() % 2;
			printf("%d  ", rands);
		}
	}

	return 0;
}
*/




/*
//문제10		 : 동전 앞뒤 맞추기
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS

int coinch(void);
int main(void)
{
	while (1)
	{
		int choose;
		printf("앞면 또는 뒷면(1 또는 0):  \n");
		scanf("%d", &choose);
		if (choose != 1 && choose != 0)
		{
			printf("다시 입력하시오\n");
			continue;
		}
	
		int ch = coinch();

		if (ch == choose)
		{
			printf("맞았습니다!\n");
		}
		else 
		{
			printf("틀렸습니다!\n");
		}

		printf("계속하시겠습니까? (y 또는 n)\n");
		char gos;
		scanf(" %c", &gos);

		if (gos == 'y')
			continue;
		else if (gos == 'n')
			break;
		else
			printf("다시 입력하시오\n");
	}

	return 0;
}


int coinch(void)
{
	int coin = 0;
	srand((unsigned)time(NULL));
	while(1)
	{	
		coin = 0+rand() % 2;
		break;
	}
	return coin;
}
*/




/*
//문제11
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	double rn = 0;
	srand((unsigned)time(NULL));

	for (int i = 1; i <= 5; i++)
	{
		rn = rand() / (double)RAND_MAX;
		printf("%f  ", rn);
	}
	return 0;
}
*/



/*
//문제12
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void print_value(int n);
int main(void)
{
	int num;
	while (1)
	{
		printf("값을 입력하시오(종료는 음수)  :  ");
		scanf("%d", &num);


		if (num == 0)
		{
			printf("다시 입력하시오\n\n");
			continue;
		}
		else if (num < 0)
		{
			break;
		}
		else if (num > 0)
		{
			print_value(num);
		}
	}

	return 0;
}

void print_value(int n)
{
	for (int i = 1; i <= n; i++)
	{
		printf("*");
	}
	printf("\n");
}
*/




/*
//문제13
#include <stdio.h>

int is_multiple(int n, int m);
int main(void)
{
	int num1, num2;

	printf("첫번째 정수를 입력하시오 : ");
	scanf("%d", &num1);
	printf("두번째 정수를 입력하시오 : ");
	scanf("%d", &num2);

	if (is_multiple(num1, num2) == 1)
		printf("%d는 %d의 배수입니다.",num1,num2);
	else if (is_multiple(num1, num2) == 0)
		printf("%d는 %d의 배수가 아닙니다.",num1,num2);

	return 0;
}

int is_multiple(int n, int m)
{
	if ((n % m) == 0)
		return 1;
	else
		return 0;
}
*/



/*
//문제15
#include <stdio.h>

int is_prime(int n);
int main(void)
{
	for (int i = 2; i < 100; i++) 
	{
		if (is_prime(i) == 1)
			printf("%d ", i);
	}
	return 0;
}

int  is_prime(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0) return 0;
	}
	return 1;
}
*/



/*
//문제18
#include <stdio.h>

int add(int n1, int n2);
int subtract(int n1, int n2);
int multiple(int n1, int n2);
int division(int n1, int n2);
int modulus(int n1, int n2);
int main(void)
{
	int menu;
	int n1, n2;
	char conti;

	while (1)
	{
		printf("\n===========================\n");
		printf("MENU\n");
		printf("===========================\n");
		printf("1.  덧셈\n");
		printf("2.  뺄셈\n");
		printf("3.  곱셈\n");
		printf("4.  나눗셈\n");
		printf("5.  나머지\n");
		printf("0.  종료\n\n");
		printf("\n원하는 메뉴를 선택하시오(1-5) : ");
		scanf("%d", &menu);
		if (menu > 5 && menu < 1)
		{
			printf("다시 입력하시오\n");
			continue;
		}

		else if (menu == 1)
		{
			printf("\n숫자 2개를 입력하시오 : ");
			scanf("%d %d", &n1, &n2);

			printf("연산결과 : %d\n", add(n1, n2));
		}

		else if (menu == 2)
		{
			printf("\n숫자 2개를 입력하시오 : ");
			scanf("%d %d", &n1, &n2);

			printf("연산결과 : %d\n", subtract(n1, n2));
		}

		else if (menu == 3)
		{
			printf("\n숫자 2개를 입력하시오 : ");
			scanf("%d %d", &n1, &n2);

			printf("연산결과 : %d\n", multiple(n1, n2));
		}

		else if (menu == 4)
		{
			printf("\n숫자 2개를 입력하시오 : ");
			scanf("%d %d", &n1, &n2);

			printf("연산결과 : %d\n", division(n1, n2));
		}

		else if (menu == 5)
		{
			printf("\n숫자 2개를 입력하시오 : ");
			scanf("%d %d", &n1, &n2);

			printf("연산결과 : %d\n", modulus(n1, n2));
		}
		else if (menu == 0)
		{
			printf("종료합니다.");
			break;
		}

		printf("\n계속하려면 y를 누르시오: ");
		scanf(" %c", &conti);
		if (conti == 'y')
			continue;
		else
		{		printf("\n종료합니다.");
		break;
		}
	}
	return 0;
}


int add(int n1, int n2)
{
	return n1 + n2;
}

int subtract(int n1, int n2)
{
	return n1 - n2;
}

int multiple(int n1, int n2)
{
	return n1 * n2;
}

int division(int n1, int n2)
{
	return n1 / n2;
}

int modulus(int n1, int n2)
{
	return n1 % n2;
}


//get_int()함수로 두 개의 정수를 입력받는 함수를 구현해내는 방법도 있다.
*/


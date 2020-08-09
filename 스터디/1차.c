#include <stdio.h>
int main(void)
{
	//200515.스터디 과제

	int a, b, c;
	printf("세 수 A, B, C를 입력하시오");
	scanf("%d %d %d", &a, &b, &c);

	printf("%d \n", (a + b) % c);
	printf("%d \n", ((a % c) + (b % c)) % c);
	printf("%d \n", (a * b) % c);
	printf("%d", ((a % c) * (b % c)) % c);


	return 0;
}

#include <stdio.h>
int main(void)
{
	int x, y;

	printf("곱셈을 위한 세 자리 자연수 2개를 입력하시오");

	scanf("%d %d", &x, &y);

	printf("%d\n", (y % 10) * x);
	printf("%d\n", (y / 10) % 10 * x);
	printf("%d\n", (y / 100) * x);



	printf("%d\n", x * y);
	printf("쓰앵님 어려워요ㅠㅠㅠㅠ열심히 했어요ㅠㅠㅠㅠㅠ");

	return 0;


	/*
	int x, y, a, b, c;
	printf("곱셈을 위한 세 자리 자연수 2개를 입력하시오");
	scanf("%d %d", &x, &y);



	printf("%d\n", (y / 100) * x);
	y %= 100;
	printf("%d\n", (y / 10) * x);
	y %= 10;
	printf("%d\n", (y / 1) * x);
	y %= 1;



	printf("%d\n", x * y);


	return 0; */
}
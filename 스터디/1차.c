#include <stdio.h>
int main(void)
{
	//200515.什斗巨 引薦

	int a, b, c;
	printf("室 呪 A, B, C研 脊径馬獣神");
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

	printf("咽疾聖 是廃 室 切軒 切尻呪 2鯵研 脊径馬獣神");

	scanf("%d %d", &x, &y);

	printf("%d\n", (y % 10) * x);
	printf("%d\n", (y / 10) % 10 * x);
	printf("%d\n", (y / 100) * x);



	printf("%d\n", x * y);
	printf("床賞還 嬢形趨推ばばばば伸宿備 梅嬢推ばばばばば");

	return 0;


	/*
	int x, y, a, b, c;
	printf("咽疾聖 是廃 室 切軒 切尻呪 2鯵研 脊径馬獣神");
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
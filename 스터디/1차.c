#include <stdio.h>
int main(void)
{
	//200515.���͵� ����

	int a, b, c;
	printf("�� �� A, B, C�� �Է��Ͻÿ�");
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

	printf("������ ���� �� �ڸ� �ڿ��� 2���� �Է��Ͻÿ�");

	scanf("%d %d", &x, &y);

	printf("%d\n", (y % 10) * x);
	printf("%d\n", (y / 10) % 10 * x);
	printf("%d\n", (y / 100) * x);



	printf("%d\n", x * y);
	printf("���޴� �������ФФФп����� �߾��ФФФФ�");

	return 0;


	/*
	int x, y, a, b, c;
	printf("������ ���� �� �ڸ� �ڿ��� 2���� �Է��Ͻÿ�");
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
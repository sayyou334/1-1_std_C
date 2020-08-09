
/*
//����1
//rand�Լ��� ����� ���ٿ� ���� ����
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int input;
	int com=0;
	srand((unsigned)time(NULL));


	printf("��ǻ�Ͱ� ���ڸ� �����߽��ϴ�.\n\n");
	printf("------GAME START------\n\n");

	com = 1 + rand() % 50 + 1;

	while (1)
	{
		printf("1���� 50������ ���� �Է��ϼ���: ");
		scanf("%d", &input);

		if (input > 50 || input < 0)
		{
			printf("�ءء� 1���� 50������ ���� �Է��ϼ���.�ءء�\n\n");
			continue;
		}

		if (input < com)
		{
			printf("Up\n\n");
		}
		if (input > com)
		{
			printf("Down\n\n");
		}
		if (input == com)
		{
			printf("\n\n�ڡڡ� �����Դϴ�! �����մϴ�. �ڡڡ�\n\n");
			break;
		}
	}

	return 0;
}
*/








//����2
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void sandwich_price(int n);
void coffee_price(int n);
int main(void)
{
	int menu, cof, sand;

	printf("============[�޴�]=============\n");
	printf(" 1. Ŀ��\n");
	printf(" 2. ������ġ\n");
	printf(" 0. ����\n");
	printf("===============================\n\n");

	printf("�޴��� �����ϼ���: ");
	scanf_s("%d", &menu);

	while (1)
	{
		if (menu == 1)
		{
			printf("------------[Ŀ��]-------------\n");
			printf(" 1) �Ƹ޸�ī�� (400)\n");
			printf(" 2) ī��� (700)\n");
			printf(" 3) ī���ī (800)\n");
			printf(" 0. ����\n");
			printf("-------------------------------\n\n");
			printf("ǰ���� �����ϼ���: ");
			scanf_s("%d", &cof);

			coffee_price(cof);
			break;
		}
		else if (menu == 2)
		{
			printf("----------[������ġ]-----------\n");
			printf(" 1) ������ġ (700)\n");
			printf(" 2) �׸�������ġ (800)\n");
			printf(" 3) �����������ġ (800)\n");
			printf(" 0. ����\n");
			printf("-------------------------------\n\n");
			printf("ǰ���� �����ϼ���: ");
			scanf_s("%d", &sand);

			sandwich_price(sand);

			break;
		}
		else if (menu == 0)
		{
			printf("�����մϴ�.");
			break;
		}
	}

	return 0;
}

void coffee_price(int n)
{
	int m, g;
	int ame = 400, latte = 700, moca = 800;

	if (n == 0)
	{
		printf("����\n");
	}

	while (n!=0)
	{
		printf("�ݾ��� �����ϼ���");
		scanf_s("%d", &m);

		switch (n)
		{
		case 1:
			g = m - ame;
			break;
		case 2:
			g = m - latte;
			break;
		case 3:
			g = m - moca;
			break;
		default:
			printf("�ٽ��Է��ϼ���");
		}


		if (g >= 0)
		{
			printf("\n\n�����մϴ�! ���ְ� �弼��. �ܵ��� ������ �����ϴ�.\n");

			printf("��õ�� %d��\n", g / 5000);
			g %= 5000;
			printf("õ�� %d��\n", g / 1000);
			g %= 1000;
			printf("����� %d��\n", g / 500);
			g %= 500;
			printf("��� %d��\n", g / 100);
			printf("\n");
			break;
		}
		else
		{
			g = -g;
			printf("%d���� �����մϴ�.\n", g);
			continue;
		}
	}
}

void sandwich_price(int n)
{
	int m, g;
	int sand = 700, gril = 800, ras = 800;

	if (n == 0)
	{
		printf("����\n");
	}

	while (n!=0)
	{
		printf("�ݾ��� �����ϼ���\n");
		scanf_s("%d", &m);


		switch (n)
		{
		case 1:
			g = m - sand;
			break;
		case 2:
			g = m - gril;
			break;
		case 3:
			g = m - ras;
			break;
		default:
			printf("�ٽ��Է��ϼ���");
		}


		if (g >= 0)
		{
			printf("\n\n�����մϴ�! ���ְ� �弼��. �ܵ��� ������ �����ϴ�.\n");

			printf("��õ�� %d��\n", g / 5000);
			g %= 5000;
			printf("õ�� %d��\n", g / 1000);
			g %= 1000;
			printf("����� %d��\n", g / 500);
			g %= 500;
			printf("��� %d��\n", g / 100);
			printf("\n");
			break;
		}
		else
		{
			g = -g;
			printf("%d���� �����մϴ�.\n", g);
			continue;
		}
	}
}




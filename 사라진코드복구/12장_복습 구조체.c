
/*
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

struct student {
	int number;
	char name[10];
	double grade;
};

int main(void)
{
	struct student s;

	printf("�й��� �Է��Ͻÿ�: ");
	scanf("%d", &s.number);

	printf("�̸��� �Է��Ͻÿ�: ");
	scanf("%s", &s.name);

	printf("������ �Է��Ͻÿ�(�Ǽ�): ");
	scanf("%lf", &s.grade);

	printf("�й�: %d\n", s.number);
	printf("�̸�: %s\n", s.name);
	printf("����: %f\n", s.grade);
	return 0;
}
*/





/*
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

struct student
{
	int hackb;
	char name[10];
	double grade;
};

int main(void)
{
	struct student s1;

	printf("�й��� �Է��Ͻÿ� : ");
	scanf("%d", &s1.hackb);
	printf("�̸��� �Է��Ͻÿ� : ");
	scanf("%s", &s1.name);
	printf("������ �Է��Ͻÿ�(�Ǽ�) : ");
	scanf("%lf", &s1.grade);

	printf("�й� : %d\n", s1.hackb);
	printf("�̸� : %s\n", s1.name);
	printf("���� : %f", s1.grade);

	return 0;
}
*/




/*
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct email
{
	char title[30];
	char send[15];
	char recei[15];
	char text[100];
	char date[15];
	int num;
}EMAIL;

int main(void)
{
	EMAIL s1;
	printf("�̸����� ����, ������, �߽���, ����, ��¥, �켱���� ������ �Է��ϼ���\n");
	scanf(" %s %s %s %s %s %d", &s1.title, &s1.send, &s1.recei, &s1.text, &s1.date, &s1.num);

	printf("�޴��� : %s\n", s1.recei);
	printf("�������� : %s\n", s1.send);
	printf("��  �� : %s\n", s1.text);
	printf("��  ¥ : %s\n", s1.date);
	printf("�켱���� : %d", s1.num);

	return 0;
}
*/




/*
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10

typedef struct employ
{
	int sabun;
	char name[10];
	char phone[15];
	int age;
	int money;
}EMPL;

int main(void)
{
	EMPL s[SIZE];

	for (int i = 0; i < SIZE;i++)
	{
		printf("�����ȣ �̸� ��ȭ��ȣ ���� �޿��� �Է��Ͻÿ�.\n");
		scanf("%d %s %s %d %d", &s[i].sabun, s[i].name, s[i].phone, &s[i].age, &s[i].money);
		//���ڿ��� &���� �ʾƵ� ��
	}

	printf("20�� �̻� 30�� ������ ��� ����Ʈ\n");
	for (int i = 0; i < SIZE; i++)
	{
		if (s[i].age >= 20 && s[i].age <= 30)
		{
			printf("%d %s %s %d %d\n", s[i].sabun, s[i].name, s[i].phone, s[i].age, s[i].money);
		}
	}
	return 0;
}
*/



/*
#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct who
{
	char nam[10];
	char cp[15];
	char hp[15];
}WHO;

int main(void)
{
	char find[10];
	WHO s[3];

	for (int i = 0; i < 3; i++)
	{
		printf("�̸� ����ȭ �ڵ�����ȣ�� �Է��ϼ��� : \n");
		scanf(" %s %s %s", s[i].nam, s[i].cp, s[i].hp);
	}
	printf("\n\n�˻��� �̸��� �Է��Ͻÿ� ");
	scanf(" %s", &find);

	for (int i = 0; i < 3; i++)
	{
		if (strcmp(find, s[i].nam) == 0)
		{
			printf("\n����ȭ��ȣ : %s\n", s[i].cp);
			printf("�ڵ�����ȣ : %s", s[i].hp);
		}
	}

	return 0;
}
*/



/*
#include <stdio.h>
#include <string.h>
#define SIZE 3

typedef struct Person
{
	char name[20];
	char home[20];
	char phone[20];

}person;

int main(void)
{
	person man[SIZE];
	char op[10];
	int i;
	for (i = 0; i < SIZE; i++)
	{
		printf("�̸� ��ȭ �ڵ�����ȣ���Է��ϼ���");
		scanf("%s %s %s", man[i].name, man[i].home, man[i].phone);
	}
	printf("\n");
	printf("�˻��� �̸��� �Է��ϼ��� : ");
	scanf(" %s", &op);

	for (i = 0; i < SIZE; i++)
	{
		if (strcmp(op, man[i].name) == 0)
		{
			printf("����ȭ��ȣ : %s\n", man[i].home);
			printf("�ڵ�����ȣ : %s\n", man[i].phone);
		}
	}
	return 0;
}
*/





/*
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{


	return 0;
}
*/

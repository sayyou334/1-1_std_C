
/*
#include <stdio.h>
#include <string.h>
#define _CRT_NO_SECURE_WARNINGS

int main(void)
{
	char munza[15];
	scanf("%s", &munza);
	printf("���ڿ� %s�� ���̴� %d ", munza, strlen(munza));


	return 0;
}

*/



/*
#include <stdio.h>
#include <string.h>

int str_chr(char* s, char c)
{
	int cnt=0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		if(s[i]==c)
		{
			cnt++;
		}
	}
	return cnt;
}
int main(void)
{
	char munza[20];
	char gae;
	printf("���ڿ��� �Է��ϼ���");
	gets_s(munza,20);
	printf("������ �� ���ڸ� �Է��Ͻÿ�");
	scanf(" %c", &gae);
	printf("%c�� ���� : %d", gae, str_chr(munza, gae));

	return 0;
}
*/



/*
#include <stdio.h>

int str_chr(char* s, char c)
{
	int cnt=0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			cnt++;
	}
	return cnt;
}

int main(void)
{
	char munza[30];
	printf("���ڿ��� �Է��ϼ���");
	gets_s(munza, 30);

	for (int i = 'a'; i <= 'z'; i++)
	{
		printf("%c�� ���� : %d\n", i, str_chr(munza, i));
	}

	return 0;
}
*/


/*
#include <stdio.h>
#include <string.h>
int get_response(char* prompt)
{
	if (strcmp(prompt, "yes") == 0 || strcmp(prompt, "ok") == 0)
	{
		return 1;
	}
	else if (strcmp(prompt, "no") == 0)
		return 0;
	else
		return 2;
}

int main(void)
{
	char oki[10];
	printf("����� c�� ������?");
	scanf("%s", oki);
	int o = 0;
	o=get_response(oki);
	if (o == 1)
		printf("�������� �亯");
	else if (o == 0)
		printf("�������� �亯");
	else
		printf("�����ϼ�");

	return 0;
}
*/


/*
//����ü
#include <stdio.h>

struct  email
{
	char title[20];
	char su[20];
	char bal[20];
	char nae[50];
	char nal[15];
	int num;
};

int main(void)
{
	struct email s1;
	printf("�̸����� ����, ������, �߽���, ����, ��¥, �켱���� ������ �Է��ϼ���");
	scanf("%s  %s %s %s %s %d ", &s1.title, &s1.su, &s1.bal, &s1.nae, &s1.nal, &s1.num);
	printf("�޴��� : %s\n", s1.title);
	printf("�������� : %s\n", s1.bal);
	printf("�� �� : %s\n", s1.nae);
	printf("�� ¥ : %s\n", s1.nal);
	printf("�켱���� : %d", s1.num);

	return 0;
}
*/


/*
#include <stdio.h>

typedef struct employee
{
	int sa;
	char name[10];
	char ph[15];
	int age;
	int mon;
}Emp;

int main(void)
{
	Emp s[3];
	for (int i = 0; i < 3; i++)
	{
		printf("�����ȣ  �̸�  ��ȭ��ȣ  ����  �޿��� �Է��Ͻÿ�\n");
		scanf("%d %s %s %d %d", &s[i].sa, s[i].name, s[i].ph, &s[i].age, &s[i].mon);
	}

	printf("\n\n20�� �̻� 30�� ������ ��� ����Ʈ\n");
	for (int i = 0; i < 3; i++)
	{
		if (s[i].age >= 20 && s[i].age <= 30)
			printf("%d %s %s %d %d\n", s[i].sa, s[i].name, s[i].ph, s[i].age, s[i].mon);
	}
	return 0;
}
*/


/*
#include <stdio.h>
#include <string.h>
typedef struct num
{
char name[10];
char hp[15];
char pp[15];
}numm;

int main(void)
{
	numm s[3];
	char who[10];

	for (int i = 0; i < 3; i++)
	{
		printf("�̸� ����ȭ ����ȣ �Է��϶�");
		scanf("%s %s %s", s[i].name, s[i].hp, s[i].pp);
	}

	printf("�˻��� �̸��� �Է�");
	scanf(" %s", &who);
	for (int i = 0; i < 3; i++)
	{
		if (strcmp(s[i].name, who) == 0)
		{
			printf("����ȭ��ȣ : %s\n", s[i].hp);
			printf("�ڵ�����ȣ : %s", s[i].pp);
		}
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

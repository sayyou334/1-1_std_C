
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

	printf("학번을 입력하시오: ");
	scanf("%d", &s.number);

	printf("이름을 입력하시오: ");
	scanf("%s", &s.name);

	printf("학점을 입력하시오(실수): ");
	scanf("%lf", &s.grade);

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %f\n", s.grade);
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

	printf("학번을 입력하시오 : ");
	scanf("%d", &s1.hackb);
	printf("이름을 입력하시오 : ");
	scanf("%s", &s1.name);
	printf("학점을 입력하시오(실수) : ");
	scanf("%lf", &s1.grade);

	printf("학번 : %d\n", s1.hackb);
	printf("이름 : %s\n", s1.name);
	printf("학점 : %f", s1.grade);

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
	printf("이메일의 제목, 수신자, 발신자, 내용, 날짜, 우선순위 순으로 입력하세요\n");
	scanf(" %s %s %s %s %s %d", &s1.title, &s1.send, &s1.recei, &s1.text, &s1.date, &s1.num);

	printf("받는이 : %s\n", s1.recei);
	printf("보내는이 : %s\n", s1.send);
	printf("내  용 : %s\n", s1.text);
	printf("날  짜 : %s\n", s1.date);
	printf("우선순위 : %d", s1.num);

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
		printf("사원번호 이름 전화번호 나이 급여를 입력하시오.\n");
		scanf("%d %s %s %d %d", &s[i].sabun, s[i].name, s[i].phone, &s[i].age, &s[i].money);
		//문자열은 &적지 않아도 됨
	}

	printf("20살 이상 30살 이하의 사원 리스트\n");
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
		printf("이름 집전화 핸드폰번호를 입력하세요 : \n");
		scanf(" %s %s %s", s[i].nam, s[i].cp, s[i].hp);
	}
	printf("\n\n검색할 이름을 입력하시오 ");
	scanf(" %s", &find);

	for (int i = 0; i < 3; i++)
	{
		if (strcmp(find, s[i].nam) == 0)
		{
			printf("\n집전화번호 : %s\n", s[i].cp);
			printf("핸드폰번호 : %s", s[i].hp);
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
		printf("이름 전화 핸드폰번호를입력하세요");
		scanf("%s %s %s", man[i].name, man[i].home, man[i].phone);
	}
	printf("\n");
	printf("검색할 이름을 입력하세요 : ");
	scanf(" %s", &op);

	for (i = 0; i < SIZE; i++)
	{
		if (strcmp(op, man[i].name) == 0)
		{
			printf("집전화번호 : %s\n", man[i].home);
			printf("핸드폰번호 : %s\n", man[i].phone);
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

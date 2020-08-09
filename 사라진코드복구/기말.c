
/*
#include <stdio.h>
#include <string.h>
#define _CRT_NO_SECURE_WARNINGS

int main(void)
{
	char munza[15];
	scanf("%s", &munza);
	printf("문자열 %s의 길이는 %d ", munza, strlen(munza));


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
	printf("문자열을 입력하세요");
	gets_s(munza,20);
	printf("개수를 셀 문자를 입력하시오");
	scanf(" %c", &gae);
	printf("%c의 갯수 : %d", gae, str_chr(munza, gae));

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
	printf("문자열을 입력하세요");
	gets_s(munza, 30);

	for (int i = 'a'; i <= 'z'; i++)
	{
		printf("%c의 갯수 : %d\n", i, str_chr(munza, i));
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
	printf("당신은 c언어를 좋아함?");
	scanf("%s", oki);
	int o = 0;
	o=get_response(oki);
	if (o == 1)
		printf("긍정적인 답변");
	else if (o == 0)
		printf("부정적인 답변");
	else
		printf("좋아하셈");

	return 0;
}
*/


/*
//구조체
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
	printf("이메일의 제목, 수신자, 발신자, 내용, 날짜, 우선순위 순으로 입력하세요");
	scanf("%s  %s %s %s %s %d ", &s1.title, &s1.su, &s1.bal, &s1.nae, &s1.nal, &s1.num);
	printf("받는이 : %s\n", s1.title);
	printf("보내는이 : %s\n", s1.bal);
	printf("내 용 : %s\n", s1.nae);
	printf("날 짜 : %s\n", s1.nal);
	printf("우선순위 : %d", s1.num);

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
		printf("사원번호  이름  전화번호  나이  급여를 입력하시오\n");
		scanf("%d %s %s %d %d", &s[i].sa, s[i].name, s[i].ph, &s[i].age, &s[i].mon);
	}

	printf("\n\n20살 이상 30살 이하의 사원 리스트\n");
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
		printf("이름 집전화 폰번호 입력하라");
		scanf("%s %s %s", s[i].name, s[i].hp, s[i].pp);
	}

	printf("검색할 이름을 입력");
	scanf(" %s", &who);
	for (int i = 0; i < 3; i++)
	{
		if (strcmp(s[i].name, who) == 0)
		{
			printf("집전화번호 : %s\n", s[i].hp);
			printf("핸드폰번호 : %s", s[i].pp);
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




/*
//문자열
//실습 : 문자열의 길이구해서 출력
#include <stdio.h>
#include <string.h>
#define CRT_SECURE_NO_WARNINGS

int main(void)
{
	char word[10];
	printf("문자열을 입력하시오");
	scanf("%s", &word);

	printf("문자열 %s의 길이는 %d", word, strlen(word));

	return 0;
}
*/






/*
//문자열 안에 포함된 특정문자 개수 세기
#include <stdio.h>
#include <string.h>

int str_chr(char* s, char c);
int main(void)
{
	char input[30];
	char what;

	printf("문자열을 입력하세요 : ");
	gets_s(input, 30);
	printf("개수를 셀 문자를 입력하시오");
	scanf("%c", &what);
	
	printf("%c의 갯수 : %d", what, str_chr(input, what));

	return 0;
}

int str_chr(char* s, char c)
{
		int cnt = 0;
		for (int i = 0; i <= strlen(s); i++)		//(int i = 0; s[i] != '\0'; i++)
		{
			if (s[i] == c)
			{
				cnt++;
			}
		}
		return cnt;
}
*/





/*
#include <stdio.h>
#include <string.h>

int str_chr(char* s, char c);
int main(void)
{
	char word[30];
	int count = 0;
	printf("문자열을 입력하세요");
	gets_s(word, 30);

	int i;
	for (i = 'a'; i <'z'; i++)
	{
		printf("%c의 갯수 : %d\n", i, str_chr(word,i));
	}
	return 0;
}

int str_chr(char* s, char c)
{
	int cnt = 0;
	for (int i = 0; i <= strlen(s); i++)		//(int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			cnt++;
		}
	}
	return cnt;
}
*/




/*
//문자열의 길이를 구해서 출력
#include <stdio.h>
#include	<string.h>

int main(void)
{
	char word[10];
	scanf("%s", &word);
	printf("문자열 %s의 길이는 %d", word, strlen(word));

	return 0;
}




/*
#include <stdio.h>
#include	<string.h>

int main(void)
{
	char str[] = "test of C Programming";
	char dest[30];
	strcpy(dest, str);

	printf("%s\n", dest);
	puts(dest);

	return 0;
}
*/



/*
//배열의 원소 바꾸기
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[6]='';
	strcpy(str , "World");
	printf("%s", str);

	return 0;
}
*/




/*
#include <stdio.h>
#include <string.h>
int str_chr(char* s, char c);
int main(void)
{
	char munza[30];
	char gae;

	printf("문자열을 입력하세요");
	gets_s(munza, 30);
	printf("개수를 셀 문자를 입력하세요");
	scanf("%c", &gae);
	printf("%c의 개수 : %d", gae, str_chr(&munza, gae));

	return 0;
}

int str_chr(char* s, char c)
{
	int cnt = 0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			cnt++;
		}
	}		
	return cnt;
}
*/




/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char munza[30];
	printf("문자열을 입력하세요 : ");
	gets_s(munza, 30);
	for (char i = 'a'; i <= 'z'; i++)
	{
		printf("%c의 갯수 : %d\n", i, str_chr(munza, i));
	}
	return 0;
}

int str_chr(char* s, char c)
{
	int cnt = 0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		if(s[i]==c)
		{
			cnt++;
		}
	}
	return cnt;
}
*/




/*
#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
int get_response(char* prompt);
int main(void)
{
	char oki[5];
	int re = 0;
	printf("당신은 C언어를 좋아하세요?");
	scanf(" %s", oki);

	re = get_response(oki);
		if (re==1)
			printf("긍정적인 답변");
		else if (re==0)
			printf("부정적인 답변");
		else if(re==2)
			printf("좋아하세요");

	return 0;
}

int get_response(char* prompt)
{

	if ((strcmp(prompt, "yes") == 0) || (strcmp(prompt, "ok") == 0))
		return 1;
	else if (strcmp(prompt, "no") == 0)
		return 0;
	else
		return 2;
}
*/




/*
#include <stdio.h>
#include <string.h>
int get_response(char* prompt);
int main(void)
{
	char a[5] = "";
	printf("C언어 좋아함?");
	gets_s(a, sizeof(a));
	int b = get_response(a);
	if (b == 1)
	{
		printf("긍정적인 답변");
	}
	else if (b == 0)
	{
		printf("부정적인 답변");
	}
	else
	{
		return 0;
	}
	return 0;
}
int get_response(char* prompt)
{
	char a[] = "yes";
	char b[] = "no";

	if (strcmp(prompt, a) == 0)
	{
		return 1;
	}
	else if (strcmp(prompt, b) == 0)
	{
		return 0;
	}
	else
	{
		return EOF;
	}
}
*/




/*
#include <stdio.h>

int main(void)
{
	char s1[50];
	char s2[50];
	int re;

	printf("첫번째 단어를 입력하시오 : ");
	scanf("%s", s1);
	printf("두번째 단어를 입력하시오 : ");
	scanf("%s", s2);

	re = strcmp(s1, s2);
	if (re < 0)
		printf("%s가 %s보다 앞에 있습니다.", s1, s2);
	else if (re == 0)
		printf("%s와 %s는 같은 단어입니다.", s1, s2);
	else if(re>0)
		printf("%s가 %s보다 뒤에 있습니다.", s1, s2);

	return 0;
}
*/




/*
#include <stdio.h>
#include <string.h>
int str_chr(char* s, char c);
int main(void)
{
	char munza[50];
	printf("문자열을 입력하세요 : ");
	gets_s(munza);

	for (char i = 'a'; i <= 'z'; i++)
	{
		printf("%c의 갯수 : %d", i, str_chr(munza, i));
	}
	return 0;
}

int str_chr(char* s, char c)
{
	int cnt = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == c)
		{
			cnt++;
		}
	}
	return cnt;
}
*/


/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char mun[15];
	scanf(" %s",&mun);
	printf("문자열 %s의 길이는 %d", mun, strlen(mun));

	return 0;
}
*/


/*
#include <stdio.h>
#include <string.h>

int str_chr(char* s, char c)
{
	int cnt = 0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
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
	printf("문자열을 입력하세요 ");
	gets_s(munza, 20);
	printf("개수를 셀 문자를 입력하세요 ");
	scanf(" %c", &gae);
	printf("%c의 갯수 : %d", gae, str_chr(munza, gae));
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

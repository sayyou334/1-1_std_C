


/*
//���ڿ�
//�ǽ� : ���ڿ��� ���̱��ؼ� ���
#include <stdio.h>
#include <string.h>
#define CRT_SECURE_NO_WARNINGS

int main(void)
{
	char word[10];
	printf("���ڿ��� �Է��Ͻÿ�");
	scanf("%s", &word);

	printf("���ڿ� %s�� ���̴� %d", word, strlen(word));

	return 0;
}
*/






/*
//���ڿ� �ȿ� ���Ե� Ư������ ���� ����
#include <stdio.h>
#include <string.h>

int str_chr(char* s, char c);
int main(void)
{
	char input[30];
	char what;

	printf("���ڿ��� �Է��ϼ��� : ");
	gets_s(input, 30);
	printf("������ �� ���ڸ� �Է��Ͻÿ�");
	scanf("%c", &what);
	
	printf("%c�� ���� : %d", what, str_chr(input, what));

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
	printf("���ڿ��� �Է��ϼ���");
	gets_s(word, 30);

	int i;
	for (i = 'a'; i <'z'; i++)
	{
		printf("%c�� ���� : %d\n", i, str_chr(word,i));
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
//���ڿ��� ���̸� ���ؼ� ���
#include <stdio.h>
#include	<string.h>

int main(void)
{
	char word[10];
	scanf("%s", &word);
	printf("���ڿ� %s�� ���̴� %d", word, strlen(word));

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
//�迭�� ���� �ٲٱ�
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

	printf("���ڿ��� �Է��ϼ���");
	gets_s(munza, 30);
	printf("������ �� ���ڸ� �Է��ϼ���");
	scanf("%c", &gae);
	printf("%c�� ���� : %d", gae, str_chr(&munza, gae));

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
	printf("���ڿ��� �Է��ϼ��� : ");
	gets_s(munza, 30);
	for (char i = 'a'; i <= 'z'; i++)
	{
		printf("%c�� ���� : %d\n", i, str_chr(munza, i));
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
	printf("����� C�� �����ϼ���?");
	scanf(" %s", oki);

	re = get_response(oki);
		if (re==1)
			printf("�������� �亯");
		else if (re==0)
			printf("�������� �亯");
		else if(re==2)
			printf("�����ϼ���");

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
	printf("C��� ������?");
	gets_s(a, sizeof(a));
	int b = get_response(a);
	if (b == 1)
	{
		printf("�������� �亯");
	}
	else if (b == 0)
	{
		printf("�������� �亯");
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

	printf("ù��° �ܾ �Է��Ͻÿ� : ");
	scanf("%s", s1);
	printf("�ι�° �ܾ �Է��Ͻÿ� : ");
	scanf("%s", s2);

	re = strcmp(s1, s2);
	if (re < 0)
		printf("%s�� %s���� �տ� �ֽ��ϴ�.", s1, s2);
	else if (re == 0)
		printf("%s�� %s�� ���� �ܾ��Դϴ�.", s1, s2);
	else if(re>0)
		printf("%s�� %s���� �ڿ� �ֽ��ϴ�.", s1, s2);

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
	printf("���ڿ��� �Է��ϼ��� : ");
	gets_s(munza);

	for (char i = 'a'; i <= 'z'; i++)
	{
		printf("%c�� ���� : %d", i, str_chr(munza, i));
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
	printf("���ڿ� %s�� ���̴� %d", mun, strlen(mun));

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
	printf("���ڿ��� �Է��ϼ��� ");
	gets_s(munza, 20);
	printf("������ �� ���ڸ� �Է��ϼ��� ");
	scanf(" %c", &gae);
	printf("%c�� ���� : %d", gae, str_chr(munza, gae));
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

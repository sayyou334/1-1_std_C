
/*

	*���ڿ� : �ϳ� �̻��� ������ ����
				char�� �迭 ����
				"test"
					t		e		s		t		\0			//NULL���ڰ� ���ڿ��� ���� ��Ÿ��
			
			1.���ڿ� �ʱ�ȭ
					char str[4] = {'a', 'b', 'c', '\0'};
					char str[4] = "abc";
						|	a	|	b	|	c	|	\0	|
					char str[4] = "abcd"; //error
					char str[6] = "abc";   //������ \0�� ä������.

					char str[4]="";      //��ü \0�� �ʱ�ȭ��Ŵ == int A[4] = {0}; 
					char str[] = "abc";		//�ڵ����� 4�� ä����




			2.���ڿ� ���
					printf("%s", str);		//%s==string,	�迭�� ��  
					puts(�迭��);	//������ '\0'�� '\n'���� �ٲ㼭 ���



			3.���ڿ� �Է�
				cf)scanf("%d", &num);
				
				1)		scanf("%s", str);			//test of C
						����, ��, ���͸� ������ str�� ����, �� ���� ���� ���ڿ� �Է��� ��ƴ�.

				2)		gets_s(�迭��, ������);		//���͸� ������ str�� ����, '\n'�� '\0'�� �پ��� ����, ��, �����̽� �ȵ�		�ڡڡڡڡڡڡ�
						ex)  char str[30];
							  gets_s(str, sizeof(str));	//test of C




				ex) char str1[6] = "Seoul";
					char str2[3] = {'i', 's', '\0'};
					char str3[] = "the capital city of Korea.";

					printf("%s  %s  %s\n" , str1, str2, str3);




			4.���ڿ� ����
					char str[] = "test of C Programming";
					char dest[30];
					
					int i;
					for(i = 0 ; str[i] ='\0' ; i++)
					{
						dest[i] = str[i];					
					}
					dest[i] = '\0';
					printf("���� ���ڿ� : %s\n", dest);


					while�� ����غ���
					int i=0;
					while(1)
					{
						if(str[i]=='\0')
						{	break;		}
						
						dest[i] = str[i];
						i++;
					}
					dest[i] = '\0';
					printf("���� ���ڿ� : %s\n", dest);



				*#include <string.h>	���̺귯�� �Լ�
					strcpy(���, ����);		//���ڿ� ����
						char str[30];
						strcpy(str, "test of C");

					char str[] = "test of C Programming";
					char dest[30];
					strcpy(dest, str);




			5.���ڿ� ����
					char str[] = "test of C";

					int i;
					int length = 0;
					for(i = 0; str[i] != '\0'; i++)
					{
						length++;
					}
					printf("%s�� ���̴� %d\n", str, length);



					while�� ����غ���
					int i = 0;
					while(str[i] != '\0')
					{
						length++;
						i++;
					}
					printf("%s�� ���̴� %d\n", str, length);		//9




			6.���ڿ� ���� : 
					strlen(���);
					char str[] = "test of C";
					int size = strlen(str);			// (signed)strlen(str);	




			7.���ڿ� ��
					strcmp(str1, str2)
					������ 0�� ��ȯ, �ٸ��� -1(0�� �ƴ� ��)

					if(strcmp(str1, str2)==0)
						printf("�� ���ڿ��� ����.");
					else
						printf("�� ���ڿ��� �ٸ���.");

*/

//���ڿ� ������ �迭����



/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[50];
	char input;

	printf("���ڿ��� �Է��ϼ���");
	gets_s(str, sizeof(str));			//sizeof��� 50�ᵵ ��
	printf("������ �� ���ڸ� �Է��Ͻÿ�");
	scanf("%c", &input);

	int result = str_chr(str, input);
	printf("%c�� ���� : %d\n", input, result);

	return 0;
}


int str_chr(char* s, char c)
{
	int cnt = 0;
	for (int i = 0; i<=strlen(s); i++)		//(int i = 0; s[i] != '\0'; i++)
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


int main(void)
{


	return 0;
}
*/
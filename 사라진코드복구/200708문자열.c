
/*

	*문자열 : 하나 이상의 문자의 모임
				char형 배열 저장
				"test"
					t		e		s		t		\0			//NULL문자가 문자열의 끝을 나타냄
			
			1.문자열 초기화
					char str[4] = {'a', 'b', 'c', '\0'};
					char str[4] = "abc";
						|	a	|	b	|	c	|	\0	|
					char str[4] = "abcd"; //error
					char str[6] = "abc";   //나머지 \0로 채워진다.

					char str[4]="";      //전체 \0로 초기화시킴 == int A[4] = {0}; 
					char str[] = "abc";		//자동으로 4가 채워짐




			2.문자열 출력
					printf("%s", str);		//%s==string,	배열명만 씀  
					puts(배열명);	//마지막 '\0'를 '\n'으로 바꿔서 출력



			3.문자열 입력
				cf)scanf("%d", &num);
				
				1)		scanf("%s", str);			//test of C
						공백, 탭, 엔터를 만나면 str에 저장, 즉 공백 포함 문자열 입력이 어렵다.

				2)		gets_s(배열명, 사이즈);		//엔터를 만나면 str에 저장, '\n'을 '\0'로 바쑤어 저장, 탭, 스페이스 안됨		★★★★★★★
						ex)  char str[30];
							  gets_s(str, sizeof(str));	//test of C




				ex) char str1[6] = "Seoul";
					char str2[3] = {'i', 's', '\0'};
					char str3[] = "the capital city of Korea.";

					printf("%s  %s  %s\n" , str1, str2, str3);




			4.문자열 복사
					char str[] = "test of C Programming";
					char dest[30];
					
					int i;
					for(i = 0 ; str[i] ='\0' ; i++)
					{
						dest[i] = str[i];					
					}
					dest[i] = '\0';
					printf("복사 문자열 : %s\n", dest);


					while문 사용해보기
					int i=0;
					while(1)
					{
						if(str[i]=='\0')
						{	break;		}
						
						dest[i] = str[i];
						i++;
					}
					dest[i] = '\0';
					printf("복사 문자열 : %s\n", dest);



				*#include <string.h>	라이브러리 함수
					strcpy(대상, 원본);		//문자열 복사
						char str[30];
						strcpy(str, "test of C");

					char str[] = "test of C Programming";
					char dest[30];
					strcpy(dest, str);




			5.문자열 길이
					char str[] = "test of C";

					int i;
					int length = 0;
					for(i = 0; str[i] != '\0'; i++)
					{
						length++;
					}
					printf("%s의 길이는 %d\n", str, length);



					while문 사용해보기
					int i = 0;
					while(str[i] != '\0')
					{
						length++;
						i++;
					}
					printf("%s의 길이는 %d\n", str, length);		//9




			6.문자열 길이 : 
					strlen(대상);
					char str[] = "test of C";
					int size = strlen(str);			// (signed)strlen(str);	




			7.문자열 비교
					strcmp(str1, str2)
					같으면 0을 반환, 다르면 -1(0이 아닌 값)

					if(strcmp(str1, str2)==0)
						printf("두 문자열은 같다.");
					else
						printf("두 문자열은 다르다.");

*/

//문자열 포인터 배열문제



/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[50];
	char input;

	printf("문자열을 입력하세요");
	gets_s(str, sizeof(str));			//sizeof대신 50써도 됨
	printf("개수를 셀 문자를 입력하시오");
	scanf("%c", &input);

	int result = str_chr(str, input);
	printf("%c의 갯수 : %d\n", input, result);

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
/*


		06 17
		C언어 수업내용

		7장 함수


		────────────────────


		1. 난수 발생

			① #include <stdlib.h> 선언
			② rand();	0 ~ 32767(rand_max)

				ex) for(int i = 0; i < 5; i++)
					 {
							printf("%d\n", rand());
					 }

				--> 매번 같은 숫자 5개 출력
 


		2. seed값(초기값) 설정
		    ㄴ 매번 실행값이 다른 난수를 발생시킴

			① #include <time.h> 선언
			② srand(초기값)
			    srand((unsigned)time(NULL)); // 명시적 형변환(캐스팅)

				ex) for(int i = 0; i < 5; i++)
					 {
							printf("%d\n", rand());
					 }

				--> 매번 다른 숫자 5개 출력



		3. 난수 범위 설정

			1 + rand() % 100  //  1~100까지, 1부터 범위를 줄 때는 1 + rand() % max
			rand() % 101  //  0~100까지, 0부터 범위를 줄 때는 rand() % (n+1)



		x4. 유틸리티 함수
			ㄴ 윈도우에서만 사용가능

			exit(int status)	->		exit()를 호출하면 호출 프로세스를 종료시킴
			int system(const char *command)?

				#include <stdio.h>
				#include <stdlib.h>
				#include <conio.h>

				int main()
				{
						system("dir");
						printf("아무 키나 입력하세요");
						_getch();
						system("cls");

						return 0;
				}



		x5. 수학 라이브러리 함수

		   	 ㅇ abs(int x) // fabs(double x)
			     - 절댓값

			 ㅇ pow(double x, double y)
			     - x^y

			 ㅇ sprt(double x)
			     - 제곱근

			 ㅇ cell(double x)
				 - x보다 큰 가장 작은 정수를 반환

			 ㅇ floor(double x)
			     - x보다 작은 가장 큰 정수를 반환		
*/
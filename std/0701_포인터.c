/*


		07 01
		C언어 수업내용

		10장 포인터


		────────────────────


		1. 포인터
			(= 포인터 변수)

			- 변수의 주소값을 담아두는 변수
			- 주소값(&) 저장이 목적
			   ㄴ 주소는 모두 정수(음수 x), 각 byte의 첫 번째 주소값만 저장됨

			ex.
			int *		double *		char *

			--> __형 변수의 주소값을 저장하는 자료형
			--> 무조건 4byte

			int num;
			printf("%u(unsigned)", &num);	// 주소값 출력함

		
			1-1) 포인터 변수(*)와 & 연산자

					int num;
					int *ptr = &num;
							>> ptr은 변수명
					int *ptr;
					ptr = &num;

					int *ptr1 = ptr; // 둘 다 &num을 가리킴
					ptr = &num1; // num의 주소값은 휘발되고 num1 남음
					
					// int * 자료형의 ptr 변수에 num의 주소값을 저장함
					// 걍 ptr 찍으면 주소값 나옴


			1-2) 포인터 변수를 이용해 값을 통제
			
					int num = 10;
					int *ptr = &num;

					*ptr++; 
					(*ptr)++; // num의 값이 11이 됨

					int result = (*ptr)++;		주소값에서 값을 가져온 후 후위 연산
					int result = *ptr++;		4byte보다 큰 다른 공간을 가리키게 됨
					


			※ 주의할 점

				- 초기화가 안된 포인터를 사용하면 안됨
				   int *ptr = NULL; 로 초기화할 것
								  ㄴ 아무곳도 가리키지 않는 포인터

				- 포인터 타입 = 변수의 타입




		2. 인수 전달 방법


			1) call by value (값에 의한 호출)
				- 외부에서 값 변경할 수 X

			2) ★★★★★ call by reference (참조에 의한 호출)
				- 외부에서 값 변경하는 게 가능
				 포인터 사용

				ex.
				void swap(int * a, int * b);
				{
					int tmp = *a;
					*a = *b;
					*b = tmp;
				}

				int main()
				{
					int a = 10, b = 20;
					swap(&a, &b); // void형, tmp.
					printf("%d %d", a, b);

					return 0;
				}




		3. 포인터 연산

			char *p = &ch;	>>	 ++ 연산 시 주소값 1증가, ch 주소의 다음 주소를 가리킴
			short 2byte  >>  주소값 2만큼 증가
*/
/*


		06 24
		C언어 수업내용

		9장 배열
		(8장 재귀함수 skip)

		[과제]
		투표 집계
		막대그래프 출력


		────────────────────


		1. 배열
		
		    자료형 배열명[SIZE];

			int std[SIZE];
			std[i] --> std 배열의 원소는 index를 통해 접근
											  		 ㄴ 정수 상수, 정수형 변수

			- char형 배열은 SIZE - 1,
			  마지막 인덱스에는 무조건 \0 (NULL)이 들어감



		2. 배열 초기화
		    
			int A[SIZE] = { 1, 2, 3, 4, 5 }; // 선언하면서 초기화
			int B[5] = { 1, 2 }; // 일부만 입력되면 나머지는 0으로 초기화
			int C[5] = { 0 }; // 전부 0으로 초기화
			int D[] = { 1, 2, 3 }; // 원소의 개수로 SIZE 자동 초기화



		***3. 배열 사이즈

			sizeof() 연산자
				- sizeof(E) / sizeof(E[0]);
				  20byte가 결과로 출력, 하나의 byte로 나누면 원래 크기를 알 수 O

			ex)
			void MyFunc(int Arr[])
			{
				for(int i = 0; i < sizeof(Arr) / sizeof(Arr[0]); i++)
				{
					a;
				}
			}



		※ 인덱스를 잘못 참조하는 경우

			int A[5];
			A[5] = 100; (X)



		4. 배열 저장 데이터 역순 출력

		    int B[SIZE] ={ 10, 20, 30, 40, 50 };
			for(int i = SIZE - 1; i >= 0; i--)
			{
				printf("B[%d] = %d\n", i, B[i]);
			}



		5. 배열 대입

			ex) int A = 10, B = ;
				 B = A;

				 int A[5] = { 10, 20, 30, 40, 50 };
				 int B[5];

				 for(int i = 0; i < SIZE; i++)
				 {
						B[i] = A[i];
				 }



		6. 배열 비교

			// 배열이 같다 == 모든 배열의 요소가 같다
	
			ex) 
			int A[5] = { 10, 20, 100, 40, 50 };
			int B[5] = { 10, 20, 30, 40, 50 };

			for ( int i = 0; i < SIZE; i++)
			{
				if(A[i] != B[i])
				{
					printf("다르다");
					return 0; // break 대신에 return 0; 사용
				}
			}
			printf("같다");

			return 0;



		7. 

		
		
		
		
		*/
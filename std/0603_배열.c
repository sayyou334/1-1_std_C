/*


		06 03
		C언어 수업내용

		7장 반복문

		────────────────────


		1. 배열(int)
			
			ㅇ int A[5]; 배열의 사이즈는 5
			ㅇ index는 0부터 시작
			   |      |      |      |      |      |
			     A[0]   A[1]   A[2]   A[3]   A[4]


			ㅇ 배열을 사용해서 최대값(max) / 최소값(min) 구하는 알고리즘 구현

			for (int i = 0; i < 5; i++)
				 {
					A[i] = i+1;
					printf("%d ", A[i]);

					if (max < A[i])
					{
					max = A[i];
					}
				 }


			● 정렬

			이중 for문 사용, 값을 교환하는 알고리즘 필요

			   |  55  |  3   |  21  |  49  |  7  |
				 A[0]   A[1]   A[2]   A[3]   A[4]


			ㅇ 오름차순 정렬 알고리즘

			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					if(A[j] > A[j+1]) // A[1]이 A[0]보다 작으면 둘의 값을 바꿈, 내림차순일 시 부등호 반대로
					{
						int tmp = A[j];
						A[j] = A[j+1];
						A[j+1] = tmp;
					}
				}
			}


			ㅇ 기호상수랑도 많이쓰임

			   #define SIZE 5
			   int A[SIZE];



		2. break;

			- if문과 함께 쓰임
			- 반복문을 즉시 종료하고 빠져나감



		3. continue;

			- 1번 skip(건너뛰기) 



		4. while () {}

			for (int i = 1; i <= 5; i++)
			{
				printf("Hello!\n");
			}

			int i = 1;
			while (i <= 5)
			{
				printf("Hello!\n");
				i++;
			}


		
		5. 유클리드 호제법



		6. do-while

*/
/*


		06 17
		C언어 수업내용

		8장 함수와 변수
		[과제1~3] O


		────────────────────


		1. 변수
		
			int num = 10;

			ㅇ 생존시간(라이프타임) : 변수의 생성과 종료
			ㅇ 범위 : 어디에서 접근할 수 있나?

			- 블럭이 다르면 변수명은 같아도 ok


		1-1. 지역변수 ( ex. 매개변수 )

			ㅇ 함수 내부에서 정의
			ㅇ 함수 호출 시 생성, 종료 시 증발
			ㅇ 초기화 X, 쓰레기값이 들어가 있음


		1-2. 전역변수

			ㅇ 함수 외부에서 정의

			ㅇ 범위에 제한이 없는 변수
			   ㄴ 어디서나 접근할 수 있음

			ㅇ 프로그램 시작 시 생성, 종료 시 증발 
			ㅇ 초기화 X, 0이 들어가 있음  //  지역변수와 차이 비교


					▶ 전역변수 & 지역변수 변수명 같아도 됨
										  ㄴ 지역변수가 더 우위  //  지역변수가 전역변수를 가린다



		2. call by value ( 값에 의한 호출 )

			>> 함수를 호출하면서 변수 || 상수 값을 전달함
			>> 외부에서 값 변경 X


			call by reference ( 주소에 의한 호출 (포인터) )

			int num = 10;
			int * ptr = &num;

			>> 함수를 호출하면서 변수의 '주소값' 을 전달함
			>> 외부에서 주소(&)를 이용해 값 변경 O



		*/
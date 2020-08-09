
//200620난수
/*
		난수 : 랜덤으로 받는 수

		#include <stdlib.h>
		#include <time.h>			-헤더파일 포함 시켜주기
					ㄴtime은 계속해서 변하는 수를 받기 위해 seed값 안에 넣어준다.
					ㄴex) srand((unsinged)time(NULL));
								srand : seed random

		rand() : 호출 시 난수가 생성됨
					ㄴ범위지정 : 나머지 연산자 ( % )를 이용한다.
					ㄴex) 1~45번 사이로 제한
							1 + (rand() % 45);

		srand() : 난수 생성시 씨앗값이 됨. 시드값이 달라지면 이후 생성되는 모든 난수값이 달라진다.
					ㄴ계속 변하는 값을 자동으로 얻기 위해 time()을 호출하여 srand()함수를 이용해 시드값으로 설정한다.
					ㄴex) srand((unsigned)time(NULL));

*/
	
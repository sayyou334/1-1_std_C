


/*

	구조체 (struct) : 사용자 정의 자료형

		1) 필요성
			
				학생	:	이름, 학번, 점수
				char name[30];		//홍길동
				int sno;		//202001
				int score;		//100

				하나의 자료형 묶어 주고 싶다.
				==> 구조체




		2) 선언

				struct 구조체명
				{
					멤버1;		//기본 자료형 이용	
					멤버2;		
					멤버3;
				};	//세미콜론 붙임



				typedef하는 형식
				ex)    typedef 자료형 new자료형;
				typedef	struct struct
						{
							char name[30 ];
							char major[30];									
							int sno;
							int score;
						}STUDENT;

			->		STUDENT std1;



			 					      이름									전공						학년			   점수
						|									|									|					|					|




		3) 구조체 변수 선언
				struct 구조체명 변수명;
		ex) 	struct student std1;			//int num;


			3-1) 구조체 변수 초기화
				STUDENT std1={"kim", "security", 202010, 99};		//순서대로 초기화함
				struct student std1;





		4) 구조체 변수 데이터 저장 

				std1.멤버
				gets_s(input, 30);	//yu gyeong
				strcpy(std1.name, "홍길동");		//char str[50] = "홍길동";
				strcpy(std1.major, "융합 보안");
				std1.sno = 202001;
				std1.score = 100;

				문자열만 strcpy

		5)구조체 변수 데이터 입력
				scanf("%s", std1.name);
				gets_s(std1.name, 30);
				scanf("%d", &std1.sno);


				scanf("%s %s d %d ", std1.name, std1.major, &std1.sno, &std1.score);
											//문자열은 &을 안붙임




		6) 구조체 출력
				printf("%s %d %d %s %f", std1.name, std1.sno, std1.age, std1.major, std1.grade);




		7)  구조체가 다른 구조체의 멤버로 존재하는 경우

				struct Point
				{
					int x;
					int y;				
				};

				struct Rectangle
				{
					struct Point leftTop;
					struct Point rightBottom;				
				};

				struct Rectangle rec;
				rec.leftTop.x = 10;
				rec.leftTop.y = 20;
				rec.rightBottom = 50;
				rec.rightBottome = 100;
-------------------------------------------------------------------ㄱ
				printf("좌상단 좌표를 입력하세요");
				scanf("%d %d",&rec.leftTop.x, &rec.leftTop.y);
				printf("우하단 좌표를 입력하세요");
				scanf("%d %d", &rec.rightBottom.x, &rec.rightBottom.y);



			+ int w = rec.rightBottom.x - rec.leftTop.x;
			   int h = rec.rightBottom.y - rec.leftTop.y;
			
				int area =w*h;		// (rec.rightBottom.x - rec.leftTop.x) * (rec.rightBottom.y - rec.leftTop.y);
				int peri = (w+h) * 2

				printf("사각형의 면적은 %d이고 둘레는 %d입니다.\n", area, peri);





		8) 구조체 배열	★★★★★
				struct UnivStudent
				{
					char name[30];
					int sno;
					int age;
					char major[30];
					double grade;
				};


			cf)  int A[3];
				struct UniverStudent std[5];

				std[0].name,		std[0].age
				로 입력가능

				for(int i=0 ; i<5 ; i++)
				{
				printf("학생의 이름 학번 나이 전공 학점순으로 입력해주세요");
				scanf("%s %d %d %s %lf", std[0].name, &std[0].sno, &std[0].age, std[0].major, &std[0].grade);
				}


				//grade가 이상인 사람만 출력
				int cnt = 0;
					for(int i = 0 ; i<5 ; i++)
					{
						if(std[i].grade>=4.0)
						cnt++;
						printf("%s %d %d %s %f\n", std[0].name, std[0].sno, std[0].age, std[0].major, std[0].grade);
					}

					printf("4.0이상인 학생은 %d명 입니다." cnt);


*/

//구조체 문제 나옴 : 직원을 나타내는 구조체 연습, 전화번호부 구성





/*
//실습 email ( title, receiver, sender, content, date, deq)
//					제목  수신자  송신자  내용    날짜   우선순위(정수)
#include <stdio.h>

struct email
{
	char title[30];
	char receiver[30];
	char sender[30];
	char content[100];
	char date[30];
	int seq;
};


int main(void)
{
		//구조체 변수선언
	struct email eml;
	printf("이메일 내용을 입력하시오(제목 , 수신자,  송신자 , 내용 ,  날짜 , 우선순위(정수)) \n");
	scanf("%s %s %s %s %s %d", &eml.title, &eml.receiver, &eml.sender, &eml.content, &eml.date, &eml.seq);

	printf("받는 사람 : %s\n", eml.receiver);
	printf("보내는 사람 : %s\n", eml.sender);
	printf("제목 : %s\n", eml.title);
	printf("내용 : %s\n", eml.content);
	printf("날짜 : %s\n", eml.date);
	printf("우선순위 : %d\n", eml.seq);

	return 0;
}
*/





/*
	*구조체 : 사용자 정의 자료형

	1) 구조체 정의
	
	
*/

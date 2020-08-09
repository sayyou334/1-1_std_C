

/*
	*포인터 연산

	char ch='A';
	char * ptr =&ch;

	(*ptr)++;		//가리키는 대상의 값 증가
	ptr++;			//주소값을 증가시킴, 다른곳을 가리키게 되므로 함부로 하지 않기 //1증가

	int num = 10;
	int * ptr1 = &num;
	ptr++;		//4증가	(type의 byte만큼 증가함)

	double num1 = 3.14;
	double * ptr2 = &num1;
	ptr1++;		//8증가


	--------------------------------------------------------------------------------------

	int num = 10;
	int * ptr = &num;
	

	★★★★★int v =(*ptr)++;			//*ptr을 v에 넣고 10, num은 11이 됨			//ptr이 가리키는 값 v에 대입 후에 ptr이 가리키는 값 증가
	★★★★★int v =*ptr++;			//v=10, ptr을 4만큼 증가							//ptr이 가리키는 값을 v에 대입, ptr자체를 증가
	int v =*++ptr;			//ptr을 다른곳에 4증가, ptr이 가리키는 값 v에 대입
	int v = ++*ptr;			//v=11,num=11,ptr은 그대로									//ptr이 가리키는 값을 증가시킨 후에 v에 대입




	--------------------------------------------------------------------------------------

		*배열과 포인터
			
			int A[5] = {1, 2, 3, 4, 5};
			int * ptr = A;	// &A[0];			<-이거랑 A와 같음
			char B[3] = {'A', 'B', '\0'};
			char * cptr=	8mmmm=B;



			포인터는 배열처럼 사용이 가능하다
			배열 이름이 바로 포인터이다.
			int * ptr = a;

	배열			A[0]		      A[1]			       A[2]              A[3]
	포인터		ptr[0]	       	  ptr[1]			   ptr[2]	          ptr[3]				<-이런식으로 접근 가능
					(*ptr)		      (*ptr+1)	       (*ptr+2)		  (*ptr+3)			=4바이트씩 증가
					1			   	  2				       3				  4



			&A[0] == A;주소값 가져오기
			&A[1] == A+1;
			


		*배열과 함수
		void sum(int *p, int size())	//int * p = A;
		{
			int sum = 0;
			for(int i =0; i<size;i++)
			//sum+=arr[i];
			sum +=*(p+i);


			printf("배열 요소의 합은 %d", sum);
		}

		int main(void)
		{
			int A[5] = {1, 2, 3, 4, 5};
			sum(4,5)
			return 0;
		}



		void sub(int * b, int n)
		{
		b[0] = 4;
		b[1] = 5;
		b[2] = 6;	
		}

*/



/*
//C[i]=A[i]+B[i]
#include <stdio.h>

void array_add(int* A, int* B, int* C, int size);
int main(void)
{
	int A[10] = { 200,100,150,200,100,150,160,170,180,200 };
	int B[10] = { 50, 20, 30, 0, 10, 30, 50, 10, 20, 10 };
	int C[10] = { 0 };
	array_add(A, B, C, 10);

	printf("C[]배열 : ");   	//출력
	for (int i = 0; i < 10;i++)
	{
		printf("%d  ", C[i]);
	}

	return 0;
}

void array_add(int* A, int* B, int* C, int size)
{
	for (int i = 0; i < size; i++)
	{
		C[i] = A[i] + B[i];	//*(C+i) = *(A+i) + *(B+i);
	}
}
*/











//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@2



/*
#include <stdio.h>


int main(void)
{


	return 0;
}
*/
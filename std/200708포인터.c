

/*
	*������ ����

	char ch='A';
	char * ptr =&ch;

	(*ptr)++;		//����Ű�� ����� �� ����
	ptr++;			//�ּҰ��� ������Ŵ, �ٸ����� ����Ű�� �ǹǷ� �Ժη� ���� �ʱ� //1����

	int num = 10;
	int * ptr1 = &num;
	ptr++;		//4����	(type�� byte��ŭ ������)

	double num1 = 3.14;
	double * ptr2 = &num1;
	ptr1++;		//8����


	--------------------------------------------------------------------------------------

	int num = 10;
	int * ptr = &num;
	

	�ڡڡڡڡ�int v =(*ptr)++;			//*ptr�� v�� �ְ� 10, num�� 11�� ��			//ptr�� ����Ű�� �� v�� ���� �Ŀ� ptr�� ����Ű�� �� ����
	�ڡڡڡڡ�int v =*ptr++;			//v=10, ptr�� 4��ŭ ����							//ptr�� ����Ű�� ���� v�� ����, ptr��ü�� ����
	int v =*++ptr;			//ptr�� �ٸ����� 4����, ptr�� ����Ű�� �� v�� ����
	int v = ++*ptr;			//v=11,num=11,ptr�� �״��									//ptr�� ����Ű�� ���� ������Ų �Ŀ� v�� ����




	--------------------------------------------------------------------------------------

		*�迭�� ������
			
			int A[5] = {1, 2, 3, 4, 5};
			int * ptr = A;	// &A[0];			<-�̰Ŷ� A�� ����
			char B[3] = {'A', 'B', '\0'};
			char * cptr=	8mmmm=B;



			�����ʹ� �迭ó�� ����� �����ϴ�
			�迭 �̸��� �ٷ� �������̴�.
			int * ptr = a;

	�迭			A[0]		      A[1]			       A[2]              A[3]
	������		ptr[0]	       	  ptr[1]			   ptr[2]	          ptr[3]				<-�̷������� ���� ����
					(*ptr)		      (*ptr+1)	       (*ptr+2)		  (*ptr+3)			=4����Ʈ�� ����
					1			   	  2				       3				  4



			&A[0] == A;�ּҰ� ��������
			&A[1] == A+1;
			


		*�迭�� �Լ�
		void sum(int *p, int size())	//int * p = A;
		{
			int sum = 0;
			for(int i =0; i<size;i++)
			//sum+=arr[i];
			sum +=*(p+i);


			printf("�迭 ����� ���� %d", sum);
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

	printf("C[]�迭 : ");   	//���
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
/*


		06 17
		C��� ��������

		7�� �Լ�


		����������������������������������������


		1. ���� �߻�

			�� #include <stdlib.h> ����
			�� rand();	0 ~ 32767(rand_max)

				ex) for(int i = 0; i < 5; i++)
					 {
							printf("%d\n", rand());
					 }

				--> �Ź� ���� ���� 5�� ���
 


		2. seed��(�ʱⰪ) ����
		    �� �Ź� ���ప�� �ٸ� ������ �߻���Ŵ

			�� #include <time.h> ����
			�� srand(�ʱⰪ)
			    srand((unsigned)time(NULL)); // ����� ����ȯ(ĳ����)

				ex) for(int i = 0; i < 5; i++)
					 {
							printf("%d\n", rand());
					 }

				--> �Ź� �ٸ� ���� 5�� ���



		3. ���� ���� ����

			1 + rand() % 100  //  1~100����, 1���� ������ �� ���� 1 + rand() % max
			rand() % 101  //  0~100����, 0���� ������ �� ���� rand() % (n+1)



		x4. ��ƿ��Ƽ �Լ�
			�� �����쿡���� ��밡��

			exit(int status)	->		exit()�� ȣ���ϸ� ȣ�� ���μ����� �����Ŵ
			int system(const char *command)?

				#include <stdio.h>
				#include <stdlib.h>
				#include <conio.h>

				int main()
				{
						system("dir");
						printf("�ƹ� Ű�� �Է��ϼ���");
						_getch();
						system("cls");

						return 0;
				}



		x5. ���� ���̺귯�� �Լ�

		   	 �� abs(int x) // fabs(double x)
			     - ����

			 �� pow(double x, double y)
			     - x^y

			 �� sprt(double x)
			     - ������

			 �� cell(double x)
				 - x���� ū ���� ���� ������ ��ȯ

			 �� floor(double x)
			     - x���� ���� ���� ū ������ ��ȯ		
*/


/*
//1~100������ �� ��, 5�� ����̸鼭 3�� ����� ���� ���
#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 5 != 0)
			continue;
		else if (i % 3 != 0)
			continue;

		printf("%d\n", i);
	}

	return 0;
}
*/




/*
//for���� ����� �л� 5���� ������ �Է¹޴� ���α׷�
#include <stdio.h>

int main(void)
{
	int sum = 0, A[5];
	double avg=0;


	for (int i = 0; i <=4; i++)
	{
		
		printf("%d�� �л��� C��� ���� : ",i+1);
		scanf("%d", &A[i]);

		sum += A[i];
		avg = sum / 5;
	}

	

	printf("===========����ǥ===========\n");
	printf("  �� �հ� : %d\n", sum);
	printf("  ��� : %.1f\n", avg);
	printf("============================");

	return 0;
}
*/









//�轺Ų��� ���α׷�

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int player = 0, computer = 0;
	int num = 0;
	int brea=0;
	srand((unsigned)time(NULL));


	printf("����������������������������������������\n");
	printf("��  �轺Ų���31 ���� ��\n");
	printf("����������������������������������������\n\n");
	printf(" GAME START!\n");
	printf("�� 1���� 3������ ���� �Է��Ͻÿ�.\n");


	while (1)
	{
		printf("\n[�����] �� ���� ���� �Է��ϰڽ��ϱ�? : ");
		scanf("%d", &player);

		if (player > 3 || player <= 0)
		{
			printf("�� 1���� 3������ ���ڸ� �Է��Ͻÿ�\n\n");
			continue;
		}

		for (int i = 1; i <= player; i++)
		{
			num++;
			if (num <= 31)
			{
				printf("%d ", num);
			}
		}
			if (num >= 31)
			{
				printf("\n�ڡڡ� computer win! �ڡڡ�\n");
				brea = 1;
				break;
			}

			computer = (rand() % 3 + 1);
			printf("\n[��ǻ��] :  %d\n", computer);

			for (int i = 0; i < computer; i++)
			{
				num++;
				if (num <= 31)
				{
					printf("%d ", num);
				}
			}
				if (num >= 31)
				{
					printf("\n�ڡڡ� player win! �ڡڡ�\n");
					brea = 1;
					break;
				}
		if (brea == 1)
		{
			break;
		}
	}
	return 0;
}









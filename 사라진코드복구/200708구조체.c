


/*

	����ü (struct) : ����� ���� �ڷ���

		1) �ʿ伺
			
				�л�	:	�̸�, �й�, ����
				char name[30];		//ȫ�浿
				int sno;		//202001
				int score;		//100

				�ϳ��� �ڷ��� ���� �ְ� �ʹ�.
				==> ����ü




		2) ����

				struct ����ü��
				{
					���1;		//�⺻ �ڷ��� �̿�	
					���2;		
					���3;
				};	//�����ݷ� ����



				typedef�ϴ� ����
				ex)    typedef �ڷ��� new�ڷ���;
				typedef	struct struct
						{
							char name[30 ];
							char major[30];									
							int sno;
							int score;
						}STUDENT;

			->		STUDENT std1;



			 					      �̸�									����						�г�			   ����
						|									|									|					|					|




		3) ����ü ���� ����
				struct ����ü�� ������;
		ex) 	struct student std1;			//int num;


			3-1) ����ü ���� �ʱ�ȭ
				STUDENT std1={"kim", "security", 202010, 99};		//������� �ʱ�ȭ��
				struct student std1;





		4) ����ü ���� ������ ���� 

				std1.���
				gets_s(input, 30);	//yu gyeong
				strcpy(std1.name, "ȫ�浿");		//char str[50] = "ȫ�浿";
				strcpy(std1.major, "���� ����");
				std1.sno = 202001;
				std1.score = 100;

				���ڿ��� strcpy

		5)����ü ���� ������ �Է�
				scanf("%s", std1.name);
				gets_s(std1.name, 30);
				scanf("%d", &std1.sno);


				scanf("%s %s d %d ", std1.name, std1.major, &std1.sno, &std1.score);
											//���ڿ��� &�� �Ⱥ���




		6) ����ü ���
				printf("%s %d %d %s %f", std1.name, std1.sno, std1.age, std1.major, std1.grade);




		7)  ����ü�� �ٸ� ����ü�� ����� �����ϴ� ���

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
-------------------------------------------------------------------��
				printf("�»�� ��ǥ�� �Է��ϼ���");
				scanf("%d %d",&rec.leftTop.x, &rec.leftTop.y);
				printf("���ϴ� ��ǥ�� �Է��ϼ���");
				scanf("%d %d", &rec.rightBottom.x, &rec.rightBottom.y);



			+ int w = rec.rightBottom.x - rec.leftTop.x;
			   int h = rec.rightBottom.y - rec.leftTop.y;
			
				int area =w*h;		// (rec.rightBottom.x - rec.leftTop.x) * (rec.rightBottom.y - rec.leftTop.y);
				int peri = (w+h) * 2

				printf("�簢���� ������ %d�̰� �ѷ��� %d�Դϴ�.\n", area, peri);





		8) ����ü �迭	�ڡڡڡڡ�
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
				�� �Է°���

				for(int i=0 ; i<5 ; i++)
				{
				printf("�л��� �̸� �й� ���� ���� ���������� �Է����ּ���");
				scanf("%s %d %d %s %lf", std[0].name, &std[0].sno, &std[0].age, std[0].major, &std[0].grade);
				}


				//grade�� �̻��� ����� ���
				int cnt = 0;
					for(int i = 0 ; i<5 ; i++)
					{
						if(std[i].grade>=4.0)
						cnt++;
						printf("%s %d %d %s %f\n", std[0].name, std[0].sno, std[0].age, std[0].major, std[0].grade);
					}

					printf("4.0�̻��� �л��� %d�� �Դϴ�." cnt);


*/

//����ü ���� ���� : ������ ��Ÿ���� ����ü ����, ��ȭ��ȣ�� ����





/*
//�ǽ� email ( title, receiver, sender, content, date, deq)
//					����  ������  �۽���  ����    ��¥   �켱����(����)
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
		//����ü ��������
	struct email eml;
	printf("�̸��� ������ �Է��Ͻÿ�(���� , ������,  �۽��� , ���� ,  ��¥ , �켱����(����)) \n");
	scanf("%s %s %s %s %s %d", &eml.title, &eml.receiver, &eml.sender, &eml.content, &eml.date, &eml.seq);

	printf("�޴� ��� : %s\n", eml.receiver);
	printf("������ ��� : %s\n", eml.sender);
	printf("���� : %s\n", eml.title);
	printf("���� : %s\n", eml.content);
	printf("��¥ : %s\n", eml.date);
	printf("�켱���� : %d\n", eml.seq);

	return 0;
}
*/





/*
	*����ü : ����� ���� �ڷ���

	1) ����ü ����
	
	
*/

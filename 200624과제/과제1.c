//투표 집계하기
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10

int main(void)
{

    /*
    int input;
    int vote[SIZE] = { 0 };
    int i = 0;

    while (1)
    {
        while (1)
        {
            printf("몇번 후보자를 선택하시겠습니까?(종료 -1)\n");
            scanf("%d", &input);

            if (input == -1)
            {
                break;
            }
            else if (input == 1)
            {
                vote[0] += 1;
            }
            else if (input == 2)
            {
                vote[1] += 1;
            }
            else if (input == 3)
            {
                vote[2] += 1;
            }
            else if (input == 4)
            {
                vote[3] += 1;
            }
            else if (input == 5)
            {
                vote[4] += 1;
            }
            else if (input == 6)
            {
                vote[5] += 1;
            }
            else if (input == 7)
            {
                vote[6] += 1;
            }
            else if (input == 8)
            {
                vote[7] += 1;
            }
            else if (input == 9)
            {
                vote[8] += 1;
            }
            else if (input == 10)
            {
                vote[9] += 1;
            }
        }
        printf("\n");
        printf("값       득표결과\n");
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d        %d\n", j + 1, vote[j]);
        }
        break;
    }

    return 0;
}
*/



int input;
int vote[SIZE] = { 0 };

while (1)
{
    while (1)
    {
        printf("몇번 후보자를 선택하시겠습니까?(종료 -1)\n");
        scanf("%d", &input);

        if (input == -1)
        {
            break;
        }
        else if ((input < -1) || (input > SIZE))
        {
            printf("다시 입력하시오\n");
        }

        for (int i = 0; i <= SIZE; i++)
        {
            if (input == i + 1)
            {
                vote[i] += 1;
            }
        }
    }

        printf("값         득표결과\n");
        for (int i = 0; i < 10; i++)
        {
            printf("%d          %d\n", i + 1, vote[i]);
        }
        break;
}
return 0;
}
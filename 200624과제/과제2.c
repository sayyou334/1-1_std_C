//막대 그래프 출력하기 
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
    int grade[5] = { 30,20,10,40,50 };

    for (int i = 0; i <= grade[i]; i++)
    {
        printf("번호 %d: ", i);

        for (int j = 1; j <= grade[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
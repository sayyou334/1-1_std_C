//�迭�� �Լ�
#include <stdio.h>
#define SIZE 5

void print_array(int copy[], int size);
void copy_array(int acopy[], int bcopy[], int size);

int main(void)
{
    int A[SIZE] = { 0 };
    int B[SIZE] = { 0 };



    printf("A�迭 :    ");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("B�迭 :    ");
    for (int j = 0; j < SIZE; j++)
    {
        scanf("%d", &B[j]);
    }

    printf("--------------------------\n");

    copy_array(A, B, SIZE);

    printf("A�迭 :    ");
    print_array(A, SIZE);
    printf("\nB�迭 :    ");
    print_array(B, SIZE);

    return 0;

}

void copy_array(int acopy[], int bcopy[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bcopy[i] = acopy[i];
    }
}

void print_array(int copy[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%3d  ", copy[i]);
    }
}
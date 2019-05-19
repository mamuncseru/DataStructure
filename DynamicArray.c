#include <stdio.h>
#include <stdlib.h>

void transfer(int *A, int *B, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        B[i] = A[i];
    }
}
//running time you decided your array size
void DynamicArray(int **A, int size)
{
    *A = (int *)malloc(size * sizeof(int));
}
void ReadArray(int i, int *A, int size)
{
    for (; i < size; i++)
        scanf("%d",&A[i]);
}
void DisplayArray(int *A, int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ",A[i]);
    printf("\n");
}

int main()
{
    int n;
    int size;
    int *A, *B;
    printf("Enter the size of Array :");
    scanf("%d", &n);
    size = n;
    DynamicArray(&A, n);
    ReadArray(0, A, size);
    DisplayArray(A, size);
    printf("Want more size\n");
    scanf("%d",&n);
    DynamicArray(&B, n);
    transfer(A, B, size);
    free(A);
    A = B;
    B = NULL;
    ReadArray(n-size, A, n);
    DisplayArray(A, n);
    free(A);
    return 0;
}

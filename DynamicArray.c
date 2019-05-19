#include <stdio.h>
#include <stdlib.h>

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
    int *A;
    printf("Enter the size of Array :");
    scanf("%d", &n);
    size = n;
    DynamicArray(&A, n);
    ReadArray(0, A, size);
    DisplayArray(A, size);
    free(A);
    return 0;
}

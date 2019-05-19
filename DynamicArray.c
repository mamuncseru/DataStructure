#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int size;
    int *A;
    printf("Enter the size of Array :");
    scanf("%d", &n);
    size = n;
    //running time you decided your array size
    A = (int *)malloc(n*sizeof(int));
    printf("Do you want more size in Array, Enter it: ");
    scanf("%d",&n);
    size += n;
    //running time you decided your array size
    A = (int *)malloc(n*sizeof(int));
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&A[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

}

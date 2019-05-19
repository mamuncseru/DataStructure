#include <stdio.h>
#include <stdlib.h>
void Display2DArray(int A[][4], int n, int m)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <m; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}void DisplayDynamic2DArray(int **A, int n, int m)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <m; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}
void Read2DArray(int *B[], int n, int m, int A[][4])
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            B[i][j] = A[i][j];
        }
    }
}
void ReadDynamic2DArray(int *B[], int n, int m, int *A[])
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            B[i][j] = A[i][j];
        }
    }
}
int main()
{
    //2D Static Array
    int A[3][4] = {{1,2,3,4},{2,3,4,5},{3,4,5,6}};
    Display2DArray(A, 3,4);
    //one Dimension static and another is Dynamic
    int *B[3];
    B[0] = (int *)malloc(4*sizeof(int));
    B[1] = (int *)malloc(4*sizeof(int));
    B[2] = (int *)malloc(4*sizeof(int));
    Read2DArray(B, 3, 4, A);
    printf("***************\n");
    DisplayDynamic2DArray(B, 3, 4);

    //Two Dimension are dynamically Allocated
    int **C;
    C = (int **)malloc(3*sizeof(int *));
    C[0] = (int *)malloc(4*sizeof(int *));
    C[1] = (int *)malloc(4*sizeof(int *));
    C[2] = (int *)malloc(4*sizeof(int *));

    ReadDynamic2DArray(C, 3,4,B);
    printf("***************\n");
    DisplayDynamic2DArray(C, 3, 4);

    free(*B);
    free(C);
}

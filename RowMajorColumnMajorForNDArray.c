#include <stdio.h>
#include <stdlib.h>
void Display3DArray(int A[][2][2], int n, int m, int p)
{
    int i, j, k, raddress;
    for (i= 0; i < n; i++)
    {
        for (j =0; j < m; j++)
        {
            for (k = 0; k < p; k++)
            {
                //printf("%d ", A[i][j][k]);
                raddress = (int)&A[0][0]+(i*m*p+j*p+k)*4;
                printf("%d %d\n", raddress, &A[i][j][k]);
            }
        }
        printf("\n");
    }
}
void ReadDynamic3DArray(int ***A, int n, int m, int p)
{
    int i, j, k, raddress;
    for (i= 0; i < n; i++)
    {
        for (j =0; j < m; j++)
        {
            for (k = 0; k < p; k++)
            {
                A[i][j][k] = k;
               // raddress = (int)A+(i*m*p+j*p+k)*4;
                //printf("%d %d\n", raddress, &A[i][j][k]);
            }
        }
    }
}void DisplayDynamic3DArray(int ***A, int n, int m, int p)
{
    int i, j, k, raddress;
    for (i= 0; i < n; i++)
    {
        for (j =0; j < m; j++)
        {
            for (k = 0; k < p; k++)
            {
                A[i][j][k] = k;
                printf("%d ", A[i][j][k]);
                //raddress = (int)A[j][i]+(i*m*p+j*p+k)*4;
                //printf("%d %d\n", raddress, &A[i][j][k]);
            }
        }
        printf("\n");
    }
}
int main()
{
    int ***A;
    A = (int ***)malloc(2*sizeof(int**));
    A[0]= (int **)malloc(2*sizeof(int*));
    A[1] = (int **)malloc(2*sizeof(int*));
    A[0][0] = (int *)malloc(2*sizeof(int));
    A[0][1] = (int *)malloc(2*sizeof(int));
    A[1][0] = (int *)malloc(2*sizeof(int));
    A[1][1] = (int *)malloc(2*sizeof(int));
    ReadDynamic3DArray(A, 2, 2, 2);
    DisplayDynamic3DArray(A, 2, 2, 2);
    printf("********************\n");
    int B[2][2][2] = {{{1,2},{3,4}},{{5,6},{7,8}}};
    Display3DArray(B, 2,2,2);

}

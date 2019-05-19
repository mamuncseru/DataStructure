#include <stdio.h>
#include <stdlib.h>

void Display2DArray(int A[][4], int n, int m)
{
    int i, j, caddress;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            caddress = (int)&A[0] + (j*m+i)*4;
            printf("%d %d\n", caddress, &A[j][i]);
        }
    }
}

int main()
{
    int A[3][4] = {{1,2,3,4},{2,3,4,5},{3,4,5,6}};
    Display2DArray(A, 3, 4);
}

#include <stdio.h>
#include <stdlib.h>
void Display2DArray(int A[][4], int n, int m)
{
    int i, j;
    int raddress;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
             raddress = (int)&A[0] + (i*4+j)*4;
            printf("%d %d\n",raddress, &A[i][j]);
        }
    }
}
int main()
{
    int A[3][4] = {{1,2,3,4},{2,3,4,5},{3,4,5,6}};
    int i, j;
    Display2DArray(A, 3, 4);

    return 0;
}

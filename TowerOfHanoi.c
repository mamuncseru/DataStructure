#include <stdio.h>

//Tower of Hanoi
void TowerOfHanoi(int n, int A, int B, int C)
{
    if(n > 0)
    {
        TowerOfHanoi(n-1, A, C, B);
        printf("(%d %d)\n", A,C);
        TowerOfHanoi(n-1,B,A,C);
    }
}
int main()
{
    TowerOfHanoi(4,1,2,3);
    return 0;
}

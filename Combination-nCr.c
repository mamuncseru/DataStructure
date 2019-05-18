#include <stdio.h>

//Factorial Function
int Factorial(int n)
{
    if(n == 0) return 1;
    return Factorial(n-1)*n;
}

// nCr Function Creation
int nCr(int n, int r)
{
    int num, denominator;

    num = Factorial(n);
    denominator = Factorial(r)*Factorial(n-r);
    return num/denominator;
}
//combination using Pascal Triangle

int NCR(int n, int r)
{
    if(n ==r || r == 0)
        return 1;
    return NCR(n-1, r-1) + NCR(n-1, r);
}

int main()
{
    // General Way
    printf("%d \n", nCr(5,2));

    //using pascal triangle
    printf("%d\n", NCR(5,2));
    return 0;
}

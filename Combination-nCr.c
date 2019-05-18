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

int main()
{
    // General Way
    printf("%d \n", nCr(5,3));

    return 0;
}

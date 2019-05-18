#include <stdio.h>
#include <stdlib.h>

//Taylor Series using recursion
double e(int x, int n)
{
    static double p = 1, f = 1;
    double r;

    if(n == 0)
        return 1;
    r = e(x, n-1);
    p = p*x;
    f = f*n;
    return r+p/f;
}

// Taylor Series Iterative
double ie(int x, int n)
{
    double s = 1;
    int i;
    double num = 1;
    double den = 1;

    for (i = 1; i <= n; i++)
    {
        num*=x;
        den*=i;
        s+=num/den;
    }
    return s;
}

// Taylor Series Horner's Rule
double he(int x, int n)
{
    static double s;
    if(n == 0)
        return s;
    s = 1+x*s/n;
    return he(x, n-1);
}
int main()
{
    //recursive
    printf("%lf\n", e(4,10));

    //iterative
    printf("%lf\n", ie(4,10));

    // Horner's Rule
    printf("%lf \n", he(4,10));
    return 0;
}

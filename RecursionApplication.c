#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000
struct Array
{
    int *A;
    int size;
    int length;
};

//recursive Fibonacci Function
long long rfibonacci(int n)
{
    if(n <= 1)
        return n;
    return rfibonacci(n-2)+rfibonacci(n-1);
}
int SumOfArray(int *A, int n)
{
    if(n == 0)
        return 0;
    return A[n-1]+SumOfArray(A, n-1) ;
}

//Factorial Function
long long Factorial(long long n)
{
    if(n == 0)
        return 1;
    return n*Factorial(n-1);
}
//Power Function
long long Power(int a, int b)
{
    if(b == 0)
        return 1;
    return a*Power(a, b-1);
}

//Structure Array Initialization
void Initialization(struct Array *array)
{
    array->size = SIZE;
    array->A = (int *)malloc(array->size * sizeof(int));
}
//Reading Array
void ReadArray(struct Array *array)
{
    int i;
    printf("Enter the number of Elements: \n");
    scanf("%d", &array->length);
    printf("Enter the elements:\n");
    for (i = 0; i < array->length; i++)
        scanf("%d", &array->A[i]);
}
int main()
{
    int a, b;
    struct Array array;
    Initialization(&array);
    ReadArray(&array);
    //Summation Function Calling
    printf("sum of the array is: %d\n",SumOfArray(array.A, array.length));

    printf("Enter the Factorial Number:\n");
    scanf("%d", &a);
    //Factorial Function Calling
    printf("Factorial of %d is %d\n",a, Factorial(a));

    printf("Enter the Base & Power:\n");
    scanf("%d%d", &a, &b);
    //Power Function Calling
    printf("%d to the power %d is: %d\n", a, b, Power(a, b));

    printf("Enter the fibonacci position: \n");
    scanf("%d",&a);
    //fibonacci Function calling
    printf("%d\n", rfibonacci(a));

}

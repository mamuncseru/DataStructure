#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
struct Array
{
    int *A;
    int size;
    int length;
};

//Summation Function
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

//Display Function
void DisplayArray(struct Array *array)
{
    int i;
    for (i = 0; i < array->length; i++)
       printf("%d ", array->A[i]);
    printf("\n");
}

//Array Reader
void ReadArray(struct Array *array)
{
    int i;
    printf("Enter the length of array: ");
    scanf("%d",&array->length);
    for (i = 0; i < array->length; i++)
        scanf("%d", &array->A[i]);
}

// Main Function
int main()
{
    int i, sum, fact;
    struct Array array;
    array.size = SIZE;
    //memory Initialization
    array.A = (int *)malloc(array.size *sizeof(int));
    ReadArray(&array);
    DisplayArray(&array);

    //sum of the array using recursion
    sum = SumOfArray(array.A, array.length);
    printf("sum of the Array is : %d\n",sum);

    //Factorial
    printf("Enter the number that you determine the factorial: ");
    scanf("%d", &fact);
    printf("%lld\n", Factorial(fact));
    return 0;

}

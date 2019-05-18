#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
struct Array
{
    int *A;
    int size;
    int length;
};

//Nested Recursion

int NestedRecursion(int n)
{
    if(n>100)
        return n-10;
    return NestedRecursion(NestedRecursion(n+11));
}


// Tree Recursion Displaying the Array Element
void DisplayElementTree1(int *A, int n)
{
    if(n == 0)
        return;
    printf("%d ", A[n-1]);
    DisplayElementTree1(A, n-1);
    DisplayElementTree1(A, n-1);
}
void DisplayElementTree2(int *A, int n)
{
    if(n == 0)
        return;
    DisplayElementTree2(A, n-1);
    printf("%d ", A[n-1]);
    DisplayElementTree2(A, n-1);
}
void DisplayElementTree3(int *A, int n)
{
    if(n == 0)
        return;
    DisplayElementTree3(A, n-1);
    DisplayElementTree3(A, n-1);
    printf("%d ", A[n-1]);
}
// Tail Recursion - Similar to iteration
void DisplayElementTail(int *A, int n)
{
    if(n == 0)
        return;
    DisplayElementTail(A, n-1);
    printf("%d ", A[n-1]);
}

void DisplayElementHead(int *A, int n)
{
    if(n == 0)
        return;
    printf("%d ", A[n-1]);
    DisplayElementHead(A, n-1);
}

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
    //Iteratively Displaying Array Element
    DisplayArray(&array);

    //sum of the array using recursion
    sum = SumOfArray(array.A, array.length);
    printf("sum of the Array is : %d\n",sum);

        // Calling Tail Recursion
    printf("\nTail Recursion Displaying:\n");
    DisplayElementTail(array.A, array.length);
        //Calling Head Recursion
    printf("\nHead Recursion Displaying:\n");
    DisplayElementHead(array.A, array.length);

    printf("\nTree 1 Recursion Displaying:\n");
    DisplayElementTree1(array.A, array.length);
    printf("\nTree 2 Recursion Displaying:\n");
    DisplayElementTree2(array.A, array.length);
    printf("\nTree 3 Recursion Displaying:\n");
    DisplayElementTree3(array.A, array.length);


    printf("\nNested Recursion:\n");
    int res = NestedRecursion(95);
    printf("%d\n", res);

    //Factorial
    printf("\nEnter the number that you determine the factorial: ");
    scanf("%d", &fact);
    printf("%lld\n", Factorial(fact));



    return 0;

}

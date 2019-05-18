#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
struct Array
{
    int *A;
    int size;
    int length;
};
int SumOfArray(int *A, int n)
{
    if(n == 0)
        return 0;
    return A[n-1]+SumOfArray(A, n-1) ;
}
int main()
{
    int i, sum;
    struct Array array;
    array.size = SIZE;
    array.A = (int *)malloc(array.size *sizeof(int));
    printf("Enter the length of array: ");
    scanf("%d",&array.length);
    for (i = 0; i < array.length; i++)
        scanf("%d", &array.A[i]);
    sum = SumOfArray(array.A, array.length);
    //for (i = 0; i < array.length; i++)
     //   printf("%d ", array.A[i]);
    printf("sum of the Array is : %d\n",sum);
    return 0;

}

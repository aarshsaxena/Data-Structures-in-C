#include <stdio.h>
int factorial(int n)
{
    
    if (n<2)
    return 1;
    else
    return n*factorial(n-1);
}

void main()
{
    int n,fact;
    printf("\nEnter the number: ");
    scanf("%d",&n);

    fact=factorial(n);
    printf("Factorial of %d is %d",n,fact);
}
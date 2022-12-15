#include <stdio.h>

int fab(int n)      //Function 
{

    if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else
        return fab(n - 1) + fab(n - 2);
}

void main()     //Main function
{
    int n, fact;
    printf("\nEnter the number: ");
    scanf("%d", &n);

    fact = fab(n);
    printf("Fabonacci of %d is %d", n, fact);
}
#include <stdio.h>
void swap(int a, int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("a=%d and b=%d",a,b);
}

void main()
{
    int a,b;
    printf("\na= ");
    scanf("%d",&a);

    printf("\nb= ");
    scanf("%d",&b);

    swap(a,b);
    
}
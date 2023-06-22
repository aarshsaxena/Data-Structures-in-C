#include<stdio.h>

void swap(int *ap,int *bp)
{
    int t=*ap;
    *ap=*bp;
    *bp=t;
}
void main()
{
    int a,b;
    printf("\nEnter a:");
    scanf("%d",&a);
    printf("\nEnter b: ");
    scanf("%d",&b);

    printf("\nBefore Swapping: a=%d and b=%d",a,b);
    swap(&a,&b);
    printf("\nAfter Swapping: a=%d and b=%d",a,b);
}
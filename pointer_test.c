#include<stdio.h>
void main()
{
    // int b=10, c=20;
    // int *p,*q;
    // p=&b;
    // q=&c;
    // printf("%d ",*p);
    // printf("%d ",*q);
    // printf("%p ",p);
    // printf("%p ",p);
    // printf("%p ",&b);

    int a[3]={1,2,3};
    int *p;
    // p=&a;
    // printf("%p  ",a);
    // printf("%p  ",p);
    // printf("%p  ",a[0]);
    printf("%p  ",a[1]);
    p++;
    printf("%p  ",p);
}
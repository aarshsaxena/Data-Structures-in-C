#include<stdio.h>
void main()
{
    int a[100];
    int i,size,e,loc;

    printf("\nEnter size of array: ");
    scanf("%d",&size);

    for ( i = 0; i < size; i++)
    {
        printf("Enter %d element: ", i);
        scanf("%d",&a[i]);
    }
    printf("Array is complete\n");

    printf("Enter the element you want to insert: ");
    scanf("%d",&e);
    printf("Enter the location you want to insert: ");
    scanf("%d",&loc);

    for ( i = size ; i > loc ; i--)
    {
        a[i]=a[i-1];
    }
    a[loc]=e;  
    
    //printing of array
    for ( i = 0; i < size+1; i++)
    {
        printf("\n %d",a[i]);
    }
}
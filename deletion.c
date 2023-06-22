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
    printf("\nArray is complete\n\n");

    printf("Enter the location of the element you want to delete: ");
    scanf("%d",&loc);
    for ( i = loc; i < size-1; i++)
    {
        a[i]=a[i+1];
    }
    //printing of array.
    for ( i = 0; i < size-1; i++)
    {
        printf("\n %d",a[i]);
    }
}
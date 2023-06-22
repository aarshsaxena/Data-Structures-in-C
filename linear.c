#include<stdio.h>
void main()
{
    int a[100];
    int i,size,ele,flag=0;

    printf("\nEnter size of array: ");
    scanf("%d",&size);

    for ( i = 0; i < size; i++)
    {
        printf("Enter %d element: ", i);
        scanf("%d",&a[i]);
    }
    printf("\nArray is complete\n\n");
    printf("Enter element you want to search: ");
    scanf("%d",&ele);
    for ( i = 0; i < size; i++)
    {
        if (a[i]==ele)
        {
            printf("\nElement found at position %d.",i);
            flag=1;
            break;
        }
        
    }
    if (flag!=1)
    {
        printf("\nNot found.");
    }
    
}
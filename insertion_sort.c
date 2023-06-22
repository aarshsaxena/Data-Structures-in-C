#include<stdio.h>
void main()
{
    int a[100];
    int i,size,j,key;
    
    //array input by user.
    printf("\nEnter size of array: ");
    scanf("%d",&size);

    for ( i = 0; i < size; i++)
    {
        printf("Enter %d element: ", i);
        scanf("%d",&a[i]);
    }
    //sorting
    for ( i = 1; i < size; i++)
    {
        key=a[i];
        for ( j = i-1; j >=0; j--)
        {
            if (a[j]>key)
            {
                a[j+1]=a[j];
            }
            else
            break;            
        }
        a[j+1]=key;
    }
    printf("\n\nSorted array:");
    for ( i = 0; i < size; i++)
    {
        printf("\n %d",a[i]);
    }
}
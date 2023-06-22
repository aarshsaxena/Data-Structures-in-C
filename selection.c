#include<stdio.h>
void main()
{

    int a[100];
    int i,size,j,temp,pos;
    
    //array input by user.
    printf("\nEnter size of array: ");
    scanf("%d",&size);

    for ( i = 0; i < size; i++)
    {
        printf("Enter %d element: ", i);
        scanf("%d",&a[i]);
    }
    printf("Array is complete\n\n");
    
    //selection sort
    for ( i = 0; i < size-1; i++)
    {
        pos=i;
        for ( j = i+1; j < size; j++)
        {
            if (a[pos]>a[j])
            {
                pos=j;
            }
        }
        if (pos!=i)
            {
                temp=a[i];
                a[i]=a[pos];
                a[pos]=temp;
            }
        
    }
    //printing of an array.
    for ( i = 0; i < size; i++)
    {
        printf("\n %d",a[i]);
    }  

}
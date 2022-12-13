// //Merging of two sorted 1-d arrays 
//      aarshsaxena
#include<stdio.h>   
void main()
{
    int A[100],B[100],C[200];
    int sizeA,sizeB,sizeC,i,j,k;
    
    //input of first array
    printf("\nEnter size of array A: ");    
    scanf("%d",&sizeA);
    printf("Enter integers in ascending order.\n");

    for ( i = 0; i < sizeA; i++)
    {
        printf("\nElement %d: ",i);
        scanf("%d",&A[i]);
    }
    
    //input of second array
    printf("\nEnter size of array B: ");
    scanf("%d",&sizeB);
    printf("Enter integers in ascending order.\n");

    for ( j = 0; j < sizeB; j++)
    {
        printf("\nElement %d: ",j);
        scanf("%d",&B[j]);
    }

    //merging
    sizeC=sizeA+sizeB;

    i=0;
    j=0;
    k=0;

    while(i<sizeA && j<sizeB)
    {
        if (A[i]<B[j])
        {
            C[k]=A[i];
            i++;
            k++;
        }
        else
        {
            C[k]=B[j];
            j++;
            k++;
        }
    }
    while (i<sizeA)
    {
        C[k]=A[i];
        i++;
        k++;
    }
    while (j<sizeB)
    {
        C[k]=B[j];
        j++;
        k++;
    }

    //printing of new array
    printf("\nNew Array: \n");
    for ( k = 0; k < sizeC; k++)
    {
        printf("\n %d",C[k]);
    }
    
}
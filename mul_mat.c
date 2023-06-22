#include <stdio.h>
#include <conio.h>
void main(){
    int a[10][10],b[3][3],c[3][3],i,j,sum,m,n,p,q;

    printf("\nEnter order of matrix A: ");
    scanf("%d %d",&m,&n);
    printf("\nEnter order of matrix B: ");
    scanf("%d %d",&p,&q);

    if (n!=p)
    {
        printf("Matrices cannot be multiplied.");
        exit(0);
    }


    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("enter element in row %d and column %d of matrix A: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    
    for ( i = 0; i < p; i++)
    {
        for ( j = 0; j < q; j++)
        {
            printf("enter element in row %d and column %d of matrix B: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    

    
    


    for ( i = 0; i < m; i++) //multiplcation
    {
        for ( j = 0; j < q; j++)
        {
            sum=0;
            for (k=0; k<n; k++)
            {
                sum=sum+(a[i][k]*b[k][j]);
            }
            c[i][j]=sum;
        }
    }

    printf("\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < q; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    

    


getch();
}
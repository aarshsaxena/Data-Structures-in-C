#include<stdio.h>
int main(){
    int s[100][3],a[100][100],i,j,k,m,n;
    //input of sparce matrix
    printf("Enter the number of rows and columns of sparce matrix: ");
    scanf("%d%d",&m,&n);
    
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("Enter s[%d][%d] matrix elements: ",i,j);
            scanf("%d",&s[i][j]);
        }
        
    }
    m=s[0][0];
    n=s[0][1];
    
    printf("input should be in incresing indexing.");
    //sparce to normal matrix.
    k=1;
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (s[k][0]==i && s[k][1]==j)
            {
                a[i][j]=s[k][2];
                k++;
            }
            else
            {
                a[i][j]=0;
            }            
        }
    }
    printf("\n")
    for ( i = 0; i < m ; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
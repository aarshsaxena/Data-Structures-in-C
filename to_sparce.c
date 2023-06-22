#include <stdio.h>
void main()
{
    int a[100][100],s[100][3],m,n,i,j,count=1;
    printf("Enter the number of rows and columns of sparce matrix: ");
    scanf("%d %d",&m,&n);
    
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("Enter a[%d][%d] matrix elements: ",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }

    //conversion to sparce matrix.

    s[0][0]=m; //no of rows
    s[0][1]=n; //no of columns

    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (a[i][j]!=0)
            {
                s[count][0]=i;
                s[count][1]=j;
                s[count][2]=a[i][j];
                count++;
                
            }
        }
        
    }
    s[0][2]=count-1; //no of elements
    
    printf("\n");
    printf("Sparce matrix: \n");

    //printing of sparce matrix.
    for ( i = 0; i < count; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }

}
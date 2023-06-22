#include <stdio.h>
int rbs(int array[], int start, int end, int key)
{
    if (end >= start)
    {
        int middle = (end + start )/2;
        if (array[middle] == key)
            return middle;
        if (array[middle] > key)
            return rbs(array, start, middle-1, key);
        else   
        return rbs(array, middle+1, end, key);
    }
    return -1;
}
int main(void)
{
    int array[100];
    int n,i;
    int key;
    printf("Enter number of list-");
    scanf("%d",&n);

    for ( i = 0; i <n; i++)
    {
        printf("A[%d]:-",i);
        scanf("%d",&array[i]);
    }
    printf("Enter the number you want to search-");
    scanf("%d",&key);
    int found = rbs(array, 0, n-1, key);
    if(found == -1 ) {
        printf("Element not found in the array ");
    }
    else {
        printf("Element found at index : %d",found);
    }
    return 0;
}
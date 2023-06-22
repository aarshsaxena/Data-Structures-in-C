#include <stdio.h>
void main()
{
    int a[100];
    int i, size, ele, flag = 0, lb, ub, mid;

    printf("\nEnter size of array: "); // Input of size of array
    scanf("%d", &size);

    for (i = 0; i < size; i++) // Array element input
    {
        printf("Enter %d element: ", i);
        scanf("%d", &a[i]);
    }
    printf("\nArray is complete\n\n");

    // Element input
    lb = 0;
    ub = size - 1;
    printf("Enter element you want to search: ");
    scanf("%d", &ele);

    // binary search.
    while (lb <= ub)
    {
        mid = (lb + ub) / 2;

        if (a[mid] == ele)
        {
            flag = 1;
            break;
        }
        else
        {
            if (ele < a[mid])
            {
                ub = mid - 1;
            }
            else
            {
                lb = mid + 1;
            }
        }
    }

    // printing the found index
    if (flag == 1)
    {
        printf("Found at position %d.", mid);
    }
    else
    {
        printf("Not found.");
    }
}
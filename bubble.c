// //Bubble Sort
// aarshsaxena

#include <stdio.h>
void main()
{
    int a[100];
    int i, size, j, temp;

    // array input by user.
    printf("\nEnter size of array: ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter %d element: ", i);
        scanf("%d", &a[i]);
    }

    // sorting
    for (i = 0; i < size - 1; i++) // loop to pass
    {
        for (j = 0; j < size - i - 1; j++) // to compare
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\n\nSorted array is\n");
    // printing of an array.
    for (i = 0; i < size; i++)
    {
        printf("\n %d", a[i]);
    }
}

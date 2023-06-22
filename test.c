#include <stdio.h>
int main()
{
    int num = 1234678;
    int arr[10];

    int n = num;
    num=0;
    while (n != 0)
    {
        num = (num * 10) + n % 10;
        n = n / 10;
    }
    printf("%d", num);

    int count = 0;

    while (num != 0)
    {
        arr[count] = num % 10;
        num = num / 10;
        count++;
    }
    printf("\n%d", arr[5]);
}
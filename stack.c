#include <stdio.h>
#include <stdlib.h>
#define max 10
int stack[max];
int top = 0;
int menu()
{
    int ch;
    printf("\nEnter:\n1. Push \n2. Pop \n3. Disply stack \n4. Exit\n");
    scanf("%d", &ch);

    return ch;
}

void push()
{
    int ele;
    if (top > max)
    {
        printf("STACK Overflowed...!");
    }
    else
    {
        printf("\nEnter element: ");
        scanf("%d", &ele);
        stack[top] = ele;
        top++;
    }
}

void pop()
{
    if (top == 0)
    {
        printf("STACK Underflow...!");
    }
    else
    {
        printf("Element at top: %d", stack[--top]);
    }
}

void display()
{
    int i;
    if (top == 0)
    {
        printf("STACK Underflow...!");
    }
    else
    {
        printf("\n\n%d <--TOP", stack[top - 1]);
        for (i = top - 2; i >= 0; i--)
        {
            printf("\n%d", stack[i]);
        }
    }
}

void main()
{
    int ch, top = 0;
    do
    {
        ch = menu();
        switch (ch)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);
        }
    } while (1);
}
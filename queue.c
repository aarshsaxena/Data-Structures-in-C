#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int A[MAX];
int f=-1, r=-1;


void enqueue()
{
    
    if (r==MAX-1 || f>r)
    {
        printf("\nQueue Overflow");
    }
    else
    {
        if (f==-1)
        {
            f=0;
        }
        
        r++;
        printf("\nEnter Element: ");
        scanf("%d",&A[r]);

    }
}

void dequeue()
{
    if (f==-1 || f>r)
    {
        printf("\nQueue Uderflow");
    }
    else 
    {
        printf("\nPoped Element: %d",A[f]);
        f++;
    }
}
void display()
{
    if (f==-1 || f>r)
    {
        printf("Empty");
    }
    else
    {
        int i;
        for ( i = f; i <= r; i++)
        {
            printf("%d  ",A[i]);
        }
    }
    
}

void main()
{
    int choice;

    while(1)
    {
    
        printf("\n\n1. Push \n2.Pop \n3.Display \n4.Exit \nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: enqueue();
            break;
            case 2: dequeue();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            default: printf("\nInvalid Choce");
            
        }
    }
}
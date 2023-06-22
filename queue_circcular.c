#include<stdio.h>
#include<stdlib.h>
#define MAX 3
int A[MAX];
int f=-1, r=-1;

void enqueue()
{
    if ((r+1)%MAX==f || (f==0 && r==MAX-1))
    {
        printf("Queue is full.");
    }
    else
    {
        int x;
        printf("\nEnter Element: "); 
        scanf("%d",&x);
        if (f==-1)
        {
            f=0;
        }
        r=(r+1)%MAX;
        A[r]=x;
    }
}
void dequeue()
{
    if (f==-1 && r==-1)
    {
        printf("\nQueue is empty.");
    }
    else if (f==r)
    {
        printf("Popped element is: %d",A[f]);
        f=r=-1;
    }
    else
    {
        printf("\nPopped element is: %d",A[f]);
        f=(f+1)%MAX;
    }
}
void display()
{
    if (f==-1 && r==-1)
    {
        printf("\nQueue is empty.");
    }
    else
    {
        int i=f;
        printf("\nQueue Element:\n");
        
        while (i!=r)
        {
            printf("%d  ",A[i]);
            i=(i+1)%MAX;
        }
        printf("%d",A[r]);
        
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
            default: printf("\nInvalid Choice.");   
        }
    }
}
#include <stdio.h>
#include <stdlib.h>

/*New node: for adding new node.
temp: for traversing the linked list.
start: the starting pointer, pointing first node.
data: int part of the node.
next: pointer part of the node, storing the address of next node.*/
struct node
{
    int data;
    struct node *next;
};

// functions to add node in the list.




void display(struct node *head)
{
    int count = 0;
    if (head == NULL)

        printf("\nLinked list is empty.\n");
    else
    {
        struct node *ptr = head;
        while (ptr != NULL)
        {
            printf("\n\t%d", ptr->data);
            ptr = ptr->next;
        }
    }
}



int main() // main program.
{
    // creating first node pointed by start
    struct node *start = NULL;
    start = (struct node *)malloc(sizeof(struct node));
    start->data = 45;
    start->next = NULL;

    // creating second node
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = 98;
    temp->next = NULL;
    start->next = temp;

    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = 100;
    temp->next = NULL;
    start->next->next = temp;

    

    return 0;
}

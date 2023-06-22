#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};


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
    start->data = 5;
    start->next = NULL;

    // creating second node
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = 25;
    new_node->next = NULL;
    start->next = new_node;

    // creating third node
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = 47;
    new_node->next = NULL;
    start->next->next = new_node;

    // creating fourth node
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = 69;
    new_node->next = NULL;
    start->next->next->next = new_node;

    // creating fifth node
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = 98;
    new_node->next = NULL;
    start->next->next->next->next = new_node;

    while (1)
    {
        int ch;
        printf("\n\n\n\tAdding node.");
        printf("\nEnter:\n\n2.To add node at beginning\n3.Display\n4.To add node at certain position\n10.Exit\n");
        scanf("%d", &ch);

        switch (ch)
        {
            case 3: display(start);
            break;
        case 5:
            start = del_start(start);
            break;
        

        case 10:
            exit(0);
        }
    }

    return 0;
}
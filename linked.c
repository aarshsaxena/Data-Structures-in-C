#include <stdio.h>
#include <stdlib.h>

/*New node: for adding new node.
temp: for traversing the linked list.
start: the starting pointer, pointing first node.
data: int part of the node.
next: pointer part of the node, storing the address of next node.*/

// creating structure for linked list
struct node
{
    int data;
    struct node *next;
};

// function prototypes.
struct node *add_start(struct node *start);
void add_last(struct node *start);
void add_pos(struct node *start);
struct node *del_start(struct node *start);
void del_last(struct node *start);
struct node *del_certain(struct node *start);
struct node *del_list(struct node *start);
struct node *reverse(struct node *start);
void count_of_nodes(struct node *head);
void display(struct node *head);

//
// main program
int main()
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
        printf("\n\n\n\tAdding node................................................");
        printf("\nEnter:\n2.To add node at beginning\n3.To add node at last.\n4.To add node at certain position\n5.To delete node at beginning.\n6.To delete node at last.\n7.To delete node at certain position.\n8.To delete entire linked list.\n9.To reverse linked list.\n10.Display\n11.Exit\n");
        scanf("\n%d", &ch);

        switch (ch)
        {
        case 1:
            break;
        case 2:
            start = add_start(start);
            break;

        case 3:
            add_last(start);
            break;

        case 4:
            add_pos(start);
            break;
        case 5:
            start = del_start(start);
            break;

        case 6:
            del_last(start);
            break;

        case 7:
            start = del_certain(start);
            break;

        case 8:
            start = del_list(start);
            break;

        case 9:
            start = reverse(start);
            break;

        case 10:
            count_of_nodes(start);
            display(start);
            break;

        case 11:
            exit(0);

        default:
            printf("Invalid choice.");
        }
    }
    return 0;
}

//

//  // functions:

// Case 2: to add node at beginning.
struct node *add_start(struct node *start)
{
    int ele;

    printf("Enter data: "); // input of data.
    scanf("%d", &ele);

    struct node *new_node, *ptr;
    new_node = (struct node *)malloc(sizeof(struct node)); // creating new node for input.
    new_node->data = ele;
    new_node->next = start;
    start = new_node;
    return start; // return the updated value of new start
}

// Case 3: to add node at last.
void add_last(struct node *start)
{
    int ele;

    printf("Enter data: "); // input of data.
    scanf("%d", &ele);
    struct node *new_node, *ptr;
    new_node = (struct node *)malloc(sizeof(struct node)); // creating new node for input.
    new_node->data = ele;
    new_node->next = NULL;

    ptr = start;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new_node;

    printf("Inserted Successfully.");
}

// Case 4: to add node at certain position.
void add_pos(struct node *start) // at certain position
{
    int ele, pos;
    printf("\nEnter data: ");
    scanf("%d", &ele);
    printf("\nEnter the position of node: ");
    scanf("%d", &pos);

    struct node *new_node, *temp;
    new_node = (struct node *)malloc(sizeof(struct node));
    temp = start;

    new_node->data = ele;

    while (pos > 2)
    {
        temp = temp->next;
        pos--;
    }

    new_node->next = temp->next;
    temp->next = new_node;
}

// Case 5: to delete node at beginning.
struct node *del_start(struct node *start)
{
    if (start == NULL)
    {
        printf("\nList is empty.");
    }
    else
    {
        struct node *temp = start;
        start = start->next;
        free(temp);
        temp = NULL;
    }
    printf("Linked List is deleted.");
    return start;
}

// Case 6: to delete node at last
void del_last(struct node *start)
{
    if (start == NULL)
    {
        printf("List is empty.");
    }
    else if (start->next == NULL)
    {
        printf("deleted data: %d", start->data);
        free(start);
        start = NULL;
    }
    else
    {
        struct node *temp = start;
        struct node *tempn = start;
        while (temp->next != NULL)
        {
            tempn = temp;
            temp = temp->next;
        }
        tempn->next = NULL;
        printf("deleted data: %d", temp->data);
        free(temp);
        temp = NULL;
    }
}

// Case 7:
struct node *del_certain(struct node *start)
{
    struct node *temp = start;
    struct node *tempn = start;

    int pos;
    printf("\nEnter position: ");
    scanf("%d", &pos);

    if (start == NULL)
    {
        printf("List is empty.");
    }
    else if (pos == 1)
    {
        start = temp->next;
        free(temp);
        temp = tempn = NULL;
    }
    else
    {
        while (pos != 1)
        {
            tempn = temp;
            temp = temp->next;
            pos--;
        }
        tempn->next = temp->next;
        free(temp);
        temp = NULL;
    }
    printf("Node deleted.");
    return start;
}

// Case 8: to delete entire list.
struct node *del_list(struct node *start)
{
    struct node *temp = start;
    while (temp != NULL)
    {
        temp = temp->next;
        free(start);
        start = temp;
    }
    return start;
}

// Case 9: to reverse list.
struct node *reverse(struct node *start)
{
    struct node *temp1 = NULL;
    struct node *temp2 = NULL;

    while (start != NULL)
    {
        temp2 = start->next;
        start->next = temp1;
        temp1 = start;
        start = temp2;
    }
    start = temp1;
    printf("list reversed.");
    return start;
}

// Case 10a: to count number of nodes.
void count_of_nodes(struct node *head)
{
    int count = 0;
    if (head == NULL)

        printf("\nLinked list is empty.\n");
    else
    {
        struct node *ptr = head;
        while (ptr != NULL)
        {
            count++;
            ptr = ptr->next;
        }

        printf("\nThe number of nodes: %d\n", count);
    }
}

// Case 10b: to display all the elements.
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

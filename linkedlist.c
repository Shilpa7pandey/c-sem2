#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *inseratbeginning(struct node *ptr)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data to be inserted: \n");
    int d;
    scanf("%d", &d);
    p->data = d;
    p->next = ptr;
    ptr = p;
    return ptr;
}
struct node *insertatend(struct node *ptr)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data to be inserted: \n");
    int d;
    scanf("%d", &d);
    p->data = d;
    struct node *h = (struct node *)malloc(sizeof(struct node));
    h = ptr;
    while (1)
    {
        if (h->next == NULL)
        {
            h->next = p;
            p->next = NULL;
            break;
        }
        h = h->next;
    }
    return ptr;
}
struct node *insertafterindex(struct node *ptr)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data to be inserted: \n");
    int d;
    scanf("%d", &d);
    p->data = d;
    printf("Enter the index after which to be inserted: \n");
    int index;
    scanf("%d", &index);
    int i = 0;
    struct node *h = (struct node *)malloc(sizeof(struct node));
    h = ptr;
    while (i != index)
    {
        h = h->next;
        i++;
    }
    p->next = h->next;
    h->next = p;
    return ptr;
}
void listtraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d \n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    int ch, f;
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *first = (struct node *)malloc(sizeof(struct node));
    head->data = 5;
    head->next = first;
    first->data = 10;
    first->next = NULL;
    while (1)
    {
        printf("Press 1 to insert at beginning, 2 to insert at end, 3 to insert after an index, 4 to exit: \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            head = inseratbeginning(head);
            listtraversal(head);
            break;
        case 2:
            head = insertatend(head);
            listtraversal(head);
            break;
        case 3:
            head = insertafterindex(head);
            listtraversal(head);
            break;
        case 4:
            f = 1;
        }
        if (f == 1)
        {
            break;
        }
    }
}

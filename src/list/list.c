#include "base.h"
#include "list.h"



void add_tail(Node** head, int data)
{
    Node* node = (Node *)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;

    if(NULL == *head)
    {
        *head = node;
    }
    else
    {
        Node* tmp = *head;
        while (NULL != tmp->next)
        {
            tmp = tmp->next;
        }

        tmp->next = node;
    }
    return;
}


static void add_head(Node** head, int data) 
{

    return;
}


void printf_list(Node* head)
{
    if(NULL == head)
    {
        printf("head is NULL\n");
    }
    else
    {
        Node* tmp = head;
        while (NULL != tmp)
        {
            printf("list data = %d\n", tmp->data);
            tmp = tmp->next;
        }
    }
    
}






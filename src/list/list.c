#include "base.h"
#include "list.h"


/**
 * @description: 头部添加
 * @param {Node**} head
 * @param {int} data
 * @return {*}
 */
void add_head(Node** head, int data) 
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
        node->next = *head;
        *head = node;
    }

    return;
}


/**
 * @description: 尾部添加
 * @param {Node**} head
 * @param {int} data
 * @return {*}
 */
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


/**
 * @description: 删除头部
 * @param {Node**} head
 * @return {*}
 */
void del_head(Node** head)
{

    Node* tmp = *head;
    if(NULL == *head)
    {
        return;
    }
    else
    {
        *head = tmp->next;
        free(tmp);
    }

    return;
}


/**
 * @description: 删除尾部
 * @param {Node**} head
 * @return {*}
 */
void del_tail(Node** head)
{
    Node* tmp = *head;
    Node* pre = NULL;
    if(NULL == tmp->next)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        while(NULL != tmp->next)
        {
            pre = tmp;
            tmp = tmp->next;
        }

        free(pre->next);
        pre->next = NULL;
        tmp = NULL;
    }

    return;
}

/**
 * @description: 打印列表
 * @param {Node*} head
 * @return {*}
 */
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






/*
 * @Author: shangchuan shangchuan97@163.com
 * @Date: 2025-04-18 22:05:58
 * @LastEditors: shangchuan shangchuan97@163.com
 * @LastEditTime: 2025-04-20 16:59:18
 * @FilePath: \data-structure\src\queue\queue.c
 */
#include"queue.h"
#include"base.h"


/**
 * @description: 队列初始化
 * @param {Queue} *queue
 * @return {*}
 */
int queue_init(Queue *queue)
{
    queue->front = queue->rear = NULL;
}

/**
 * @description: 队列判断是否为空
 * @param {Queue} *queue
 * @return {*}
 */
static int queue_isempty(Queue *queue)
{
    if (NULL == queue->front)
    {
        return S_TRUE;
    } 
}

/**
 * @description: 队列入队
 * @param {Queue} *queue
 * @param {int} data
 * @return {*}
 */
int queue_enter(Queue *queue, int data)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->data  = data;
    node->next = NULL;
    
    if(NULL == queue->rear)
    {
        queue->front = queue->rear = node;
        return S_OK;
    }

    queue->rear->next = node;
    queue->rear = node;

    return S_OK;

}   

/**
 * @description: 队列出队
 * @param {Queue} *queue
 * @param {int} data
 * @return {*}
 */
int queue_depart(Queue *queue, int *data)
{
    if(S_OK == queue_isempty(queue))
    {
        printf("queue_isempty \n");
        return S_FAILED;   
    }

    Node *tmp = queue->front;
    *data = tmp->data;
    queue->front = tmp->next;
    free(tmp);
    tmp = NULL;
    
    return S_OK;
;
}

/**
 * @description: 队列释放
 * @param {Queue} *queue
 * @return {*}
 */
int queue_free(Queue *queue)
{
    if(NULL == queue)
    {
        return S_FAILED;
    }

    Node *tmp = queue->front;
    while(NULL != tmp)
    {
        Node *node = tmp;
        tmp  = tmp->next;
        free(node);
    }
 
}

/**
 * @description: 队列打印
 * @param {Queue} *queue
 * @return {*}
 */
int queue_printf(Queue *queue)
{
    if(NULL == queue)
    {
        return S_FAILED;
    }

    Node *tmp = queue->front;
    while(NULL != tmp)
    {
        printf("queue data = %d \n", tmp->data);
        tmp  = tmp->next;
    }
    
    return S_OK;

}
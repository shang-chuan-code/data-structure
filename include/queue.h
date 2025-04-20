/*
 * @Author: shangchuan shangchuan97@163.com
 * @Date: 2025-04-13 21:58:36
 * @LastEditors: shangchuan shangchuan97@163.com
 * @LastEditTime: 2025-04-20 16:14:17
 * @FilePath: \data-structure\include\queue.h
 */
#ifndef _QUEUE_H
#define _QUEUE_H



/* -------------------------------------------------------------------------- */
/*                                     头文件                                    */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/*                                     宏定义                                    */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/*                                   结构体/枚举                                   */
/* -------------------------------------------------------------------------- */
typedef struct node
{
    int data;
    struct node *next;
}Node;

typedef struct queue
{
    Node *front;
    Node *rear;
}Queue;

/* -------------------------------------------------------------------------- */
/*                                   函数声明                                  */
/* -------------------------------------------------------------------------- */

/**
 * @description: 队列初始化
 * @param {Queue} *queue
 * @return {*}
 */
int queue_init(Queue *queue);

/**
 * @description: 队列入队
 * @param {Queue} *queue
 * @param {int} data
 * @return {*}
 */
int queue_enter(Queue *queue, int data);

/**
 * @description: 队列出队
 * @param {Queue} *queue
 * @param {int} data
 * @return {*}
 */
int queue_depart(Queue *queue, int *data);

/**
 * @description: 队列释放
 * @param {Queue} *queue
 * @return {*}
 */
int queue_free(Queue *queue);

/**
* @description: 队列打印
* @param {Queue} *queue
* @return {*}
*/
int queue_printf(Queue *queue);





#endif
#ifndef _LIST_H
#define _LIST_H



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

/* -------------------------------------------------------------------------- */
/*                                   函数声明                                  */
/* -------------------------------------------------------------------------- */

/**
 * @description: 头部添加
 * @param {Node**} head
 * @param {int} data
 * @return {*}
 */
void add_head(Node** head, int data);
/**
 * @description: 尾部添加
 * @param {Node**} head
 * @param {int} data
 * @return {*}
 */
void add_tail(Node** head, int data);
/**
 * @description: 删除头部
 * @param {Node**} head
 * @return {*}
 */
void del_head(Node** head);
/**
 * @description: 删除尾部
 * @param {Node**} head
 * @return {*}
 */
void del_tail(Node** head);
/**
 * @description: 打印列表
 * @param {Node*} head
 * @return {*}
 */
void printf_list(Node* head);

#endif
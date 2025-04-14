/*
 * @Author: shangchuan shangchuan97@163.com
 * @Date: 2025-04-13 21:58:36
 * @LastEditors: shangchuan shangchuan97@163.com
 * @LastEditTime: 2025-04-14 21:32:30
 * @FilePath: \data-structure\include\stack.h
 */
#ifndef _STACK_H
#define _STACK_H



/* -------------------------------------------------------------------------- */
/*                                     头文件                                    */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/*                                     宏定义                                    */
/* -------------------------------------------------------------------------- */
#define STACK_SIZE 3
typedef int dataType;
/* -------------------------------------------------------------------------- */
/*                                   结构体/枚举                                   */
/* -------------------------------------------------------------------------- */
//顺序栈
typedef struct seqstack
{
    dataType* data;
    int size;
    int top;
}Seqstack;

typedef struct node
{
    int data;
    struct node *next;

}Node;

/* -------------------------------------------------------------------------- */
/*                                   函数声明                                  */
/* -------------------------------------------------------------------------- */

/**
 * @description: 顺序栈初始化
 * @param {Seqstack*} st
 * @param {int} num
 * @return {*}
 */
int seqstack_init(Seqstack* st, int num);
/**
 * @description: 顺序栈入栈
 * @param {Seqstack*} st
 * @param {dataType*} data
 * @return {*}
 */
int seqstack_push(Seqstack* st, dataType* data);
/**
 * @description: 顺序栈出栈
 * @param {Seqstack*} st
 * @return {*}
 */
int seqstack_pull(Seqstack* st);
/**
 * @description:顺序栈查看栈顶 
 * @param {Seqstack*} st
 * @param {dataType*} data
 * @return {*}
 */
int seqstack_peek(Seqstack* st, dataType* data);
/**
 * @description: 顺序栈打印
 * @param {Seqstack*} st
 * @return {*}
 */
int seqstack_print(Seqstack* st);


#endif
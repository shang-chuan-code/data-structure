/*
 * @Author: shangchuan shangchuan97@163.com
 * @Date: 2025-04-13 21:57:58
 * @LastEditors: shangchuan shangchuan97@163.com
 * @LastEditTime: 2025-04-13 22:42:40
 * @FilePath: \data-structure\src\stack\stack.c
 */
#include "base.h"
#include "stack.h"

/**
 * @description: 顺序栈初始化
 * @param {Seqstack*} st
 * @param {int} num
 * @return {*}
 */
int seqstack_init(Seqstack* st, int num)
{
    st->data = malloc((sizeof(dataType) * num));
    if(NULL  == st->data)
    {
        return S_FAILED;
    }
    st->size = num;
    st->top = 0;

    return S_OK;
}

/**
 * @description: 顺序栈判断是否为满
 * @param {Seqstack*} st
 * @return {*}
 */
int seqstack_isfull(Seqstack* st)
{
    return (st->size == st->top ? S_TRUE : S_FALSE);
}

/**
 * @description: 顺序栈判断是否为空
 * @param {Seqstack*} st
 * @return {*}
 */
int seqstack_isempty(Seqstack* st)
{
    return (st->size == 0 ? S_TRUE : S_FALSE);
}

void seqstack_push(Seqstack* st, dataType* data)
{

    
}

/*
 * @Author: shangchuan shangchuan97@163.com
 * @Date: 2025-04-13 21:57:58
 * @LastEditors: shangchuan shangchuan97@163.com
 * @LastEditTime: 2025-04-14 22:16:32
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
static int seqstack_isfull(Seqstack* st)
{
    return (st->size == st->top ? S_TRUE : S_FALSE);
}

/**
 * @description: 顺序栈判断是否为空
 * @param {Seqstack*} st
 * @return {*}
 */
static int seqstack_isempty(Seqstack* st)
{
    return (st->size == 0 ? S_TRUE : S_FALSE);
}

/**
 * @description: 顺序栈入栈
 * @param {Seqstack*} st
 * @param {dataType*} data
 * @return {*}
 */
int seqstack_push(Seqstack* st, dataType* data)    
{
    if(S_TRUE == seqstack_isfull(st))
    {
        dataType* tmp = realloc(st->data, (sizeof(dataType) * (st->size+1))); 
        if(NULL  == tmp)
        {
            return S_FAILED;
        }
        st->data = tmp;
        st->size ++;
    }
    *(st->data + st->top) = *data;
    st->top ++;
    return S_OK;
}

/**
 * @description: 顺序栈出栈
 * @param {Seqstack*} st
 * @return {*}
 */
int seqstack_pull(Seqstack* st)
{
    if(S_TRUE == seqstack_isempty(st))
    {
        return S_FAILED; 
    }
    
    st->top --;
}


/**
 * @description: 
 * @param {Seqstack*} st
 * @param {dataType*} data
 * @return {*}
 */
int seqstack_peek(Seqstack* st, dataType* data)
{
    if(S_TRUE == seqstack_isempty(st))
    {
        return S_FAILED; 
    }

    //此处应注意减1
    *data = *(st->data + st->top - 1);
    return S_OK;
    
}


/**
 * @description: 顺序栈打印
 * @param {Seqstack*} st
 * @return {*}
 */
int seqstack_print(Seqstack* st)
{
    int i = 0;
    for(i = 0; i<st->top; i++)
    {
        printf("stack data[%d] = %d\n", i, *(int *)(st->data + i));
    }
    return S_OK;
}
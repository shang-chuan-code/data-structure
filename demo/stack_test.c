/*
 * @Author: shangchuan shangchuan97@163.com
 * @Date: 2025-04-13 22:01:28
 * @LastEditors: shangchuan shangchuan97@163.com
 * @LastEditTime: 2025-04-15 22:58:27
 * @FilePath: \data-structure\demo\stack_test.c
 */
#include "base.h"
#include "stack.h"

char stack_menu[MENU_MAX_OUTPUT] = 
{
    "\
    \r\n 0.push seqstack\
    \r\n 1.pop seqstack \
    \r\n 2.peek seqstack \
    \r\n 3.push stack \
    \r\n 4.pop stack \
    \r\n 5.peek stack \
    \r\n please input your choose:"\

};



int unit_test_stack()
{
    char ch = 0;
    int num = 0;
    //顺序栈初始化
    Seqstack *st = NULL;
    st = malloc(sizeof(Seqstack));
    memset(st, 0, sizeof(Seqstack));
    seqstack_init(st, STACK_SIZE);
    //链式栈初始化
    Stack * stack = NULL;
    stack_init(&stack);
    
    while (1)
    {
        fflush(stdin);
        printf(stack_menu);
        base_getchar(&ch);
        switch(ch)
        {
            case '0':
            {
                printf("\r\nplese input num push seqstack:\n");
                base_getnum(&num);
                seqstack_push(st, (dataType*)&num);
                seqstack_print(st);
                break;
            }
            case '1':
            {
                seqstack_pop(st);
                seqstack_print(st);
                break;
            }
            case '2':
            {
                seqstack_peek(st, (dataType*)&num);
                printf("seqstack peek data = %d\n", num);
                break;
            }
            case '3':
            {
                printf("\r\nplese input num push stack:\n");
                base_getnum(&num);
                stack_push(stack, num);
                stack_printf(stack);
                break;
            }
            case '4':
            {
                stack_pop(stack);
                stack_printf(stack);
                break;
            }
            case '5':
            {
                stack_peek(stack, &num);
                printf("stack peek data = %d\n", num);
                break;
            }
        }
        usleep(200* 1000);

    }
    return S_OK;
}
/*
 * @Author: shangchuan shangchuan97@163.com
 * @Date: 2025-04-13 22:01:28
 * @LastEditors: shangchuan shangchuan97@163.com
 * @LastEditTime: 2025-04-14 22:13:33
 * @FilePath: \data-structure\demo\stack_test.c
 */
#include "base.h"
#include "stack.h"

char stack_menu[MENU_MAX_OUTPUT] = 
{
    "\
    \r\n 0.push seqstack\
    \r\n 1.pull seqstack \
    \r\n 2.peek seqstack \
    \r\n 3.del tail \
    \r\n please input your choose:"\

};



int unit_test_stack()
{
    char ch = 0;
    int num = 0;
    Seqstack *st = NULL;
    st = malloc(sizeof(Seqstack));
    memset(st, 0, sizeof(Seqstack));
    seqstack_init(st, STACK_SIZE);
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
                seqstack_pull(st);
                seqstack_print(st);
                break;
            }
            case '2':
            {
                seqstack_peek(st, (dataType*)&num);
                printf("seqstack peek data = %d\n", num);
                break;
            }
            // case '3':
            // {
            //     del_tail(&head);
            //     printf_list(head);
            //     break;
            // }
        }
        usleep(200* 1000);

    }
    return S_OK;
}
#include "base.h"
#include "queue.h"

char queue_menu[MENU_MAX_OUTPUT] = 
{
    "\
    \r\n 0.queue enter \
    \r\n 1.queue depart \
    \r\n 2.queue free \
    \r\n please input your choose:"\

};



int unit_test_queue()
{
    char ch = 0;
    int num = 0;
    Queue queue  = {0};
    queue_init(&queue);

    while (1)
    {
        fflush(stdin);
        printf(queue_menu);
        base_getchar(&ch);
        switch(ch)
        {
            case '0':
            {
                printf("\r\nplese input num queue enter:\r\n");
                base_getnum(&num);
                queue_enter(&queue, num);
                queue_printf(&queue);
                break;
            }
            case '1':
            {
                queue_depart(&queue, &num);
                queue_printf(&queue);
                printf("queue_depart: = %d\n", num);
                break;
            }
            case '2':
            {
                queue_free(&queue);
                break;
            }
        }
        usleep(200* 1000);

    }
    return S_OK;
}
#include "base.h"
#include "list.h"

char list_menu[MENU_MAX_OUTPUT] = 
{
    "\
    \r\n 0.add head \
    \r\n 1.add tail \
    \r\n 2.del head \
    \r\n 3.del tail \
    \r\n please input your choose:"\

};



int unit_test_list()
{
    char ch = 0;
    int num = 0;
    Node* head = NULL;
    while (1)
    {
        fflush(stdin);
        printf(list_menu);
        base_getchar(&ch);
        switch(ch)
        {
            case '0':
            {
                printf("\r\nplese input num add head:\r\n");
                base_getnum(&num);
                add_head(&head, num);
                printf_list(head);
                break;
            }
            case '1':
            {
                printf("\r\nplese input num add tail:\r\n");
                base_getnum(&num);
                add_tail(&head, num);
                printf_list(head);
                break;
            }
            case '2':
            {
                del_head(&head);
                printf_list(head);
                break;
            }
            case '3':
            {
                del_tail(&head);
                printf_list(head);
                break;
            }
        }
        usleep(200* 1000);

    }
    return S_OK;
}
#include "base.h"
#include "list.h"

#define MENU_MAX_OUTPUT

char list_menu[MENU_MAX_OUTPUT] = 
{
    "\
    \r\n 0.add head \
    \r\n 1.add tail \
    \r\n 2.del head \
    \r\n 3.add tail \
    \r\n please input your choose:"\

};


static int unit_test_list()
{
    char ch;
    Node* head = NULL;
    while (1)
    {
        printf(list_menu);
        scanf("%c", &ch);
        switch(ch)
        {
            case '0':
            {
                break;
            }
            case '1':
            {
                break;
            }
        }
        usleep(100* 1000);

    }
    return S_OK;
}


int main(int argc, char *arg[])
{
    int i;
    for(i=0; i<argc; i++)
    {
        printf("arg[%d] = %s\n", i, arg[i]);
    }

    if(strcmp(arg[1], "list") == 0)
    {
        unit_test_list();
    }
    else if (strcmp(arg[1], "stack") == 0)
    {

    }
    else
    {
        unit_test_list();
    }
    

    return S_OK;
}
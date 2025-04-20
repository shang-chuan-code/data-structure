/*
 * @Author: shangchuan shangchuan97@163.com
 * @Date: 2025-04-09 18:27:20
 * @LastEditors: shangchuan shangchuan97@163.com
 * @LastEditTime: 2025-04-20 16:25:53
 * @FilePath: \data-structure\main.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "base.h"
#include "list_test.h"
#include "stack_test.h"
#include "queue_test.h"


int main(int argc, char *arg[])
{
    int i;


    // if(argc < 2)
    // {
    //     printf("[help] mian list/stack/xxxx \n");
    //     return S_OK;
    // }
    // else
    // {
    //     for(i=0; i<argc; i++)
    //     {
    //         printf("arg[%d] = %s\n", i, arg[i]);
    //     }
    // }

    unit_test_queue();
    
    if(strcmp(arg[1], "list") == 0)
    {
        unit_test_list();
    }
    else if (strcmp(arg[1], "stack") == 0)
    {
        unit_test_stack();
    }
    else
    {
        unit_test_list();
    }
    

    return S_OK;
}
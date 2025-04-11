/*
 * @Author: shangchuan shangchuan97@163.com
 * @Date: 2025-04-10 22:32:52
 * @LastEditors: shangchuan shangchuan97@163.com
 * @LastEditTime: 2025-04-11 22:07:12
 * @FilePath: \data-structure\src\base\base.c
 */
#include "base.h"




int base_getchar(char * ch)
{
    
    fflush(stdin);
    scanf("%c", ch);
   
    return S_OK;
}



int base_getnum(int* num)
{

    fflush(stdin);
    scanf("%d", num);
   
    return S_OK;
}
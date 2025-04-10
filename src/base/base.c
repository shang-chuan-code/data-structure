#include "base.h"




int base_getchar(char * ch)
{
    
    fflush(stdout);
    scanf("%c", ch);
   
    return S_OK;
}



int base_getnum(int* num)
{

    fflush(stdout);
    scanf("%d", num);
   
    return S_OK;
}
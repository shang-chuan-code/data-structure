#include "base.h"
#include "list_test.h"


int main(int argc, char *arg[])
{
    int i;


    if(argc < 2)
    {
        printf("[help] mian list/stack/xxxx \n");
        return S_OK;
    }
    else
    {
        for(i=0; i<argc; i++)
        {
            printf("arg[%d] = %s\n", i, arg[i]);
        }
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
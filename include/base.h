#ifndef _BASE_H
#define _BASE_H

/****************头文件包含***************/
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>


/****************宏定义***************/



#define MENU_MAX_OUTPUT  1024
#define S_OK              1
#define S_FAILED          0 
 

#define  LOG_PRINTF(fmt, ...) printf("[%s]"fmt, _func_, __VA_ARGS__)

/****************结构体定义***************/ 


/****************函数声明***************/ 
int base_getchar(char * ch);
int base_getnum(int* num);

#endif
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    extern int num; /*定义外部整型变量*/
    printf("%d\n", num); /*显示变量值*/

    return EXIT_SUCCESS; /*程序结束*/
}
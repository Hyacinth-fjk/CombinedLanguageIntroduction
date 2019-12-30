#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    register int num = 100; /*定义寄存器整型变量*/

    printf("%d\n", num); /*显示结果*/

    return EXIT_SUCCESS; /*程序结束*/
}
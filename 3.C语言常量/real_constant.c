#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(void)
{
    printf("科学计数方式：%f\n", 123.45); /*科学计数法*/
    printf("指数方式：%e\n", 5.458e-1); /*指数方式显示*/

    printf("单精度类型：%g，精度为：%d\n", 1.2345e2F, FLT_DIG); /*单精度类型*/
    printf("双精度类型：%lg，精度为：%d\n", 1.2345e2, DBL_DIG); /*双精度类型*/
    printf("长双精度类型：%Lg，精度为：%d\n", 5.458e-1L, LDBL_DIG); /*长双精度类型*/

    return EXIT_SUCCESS;
}
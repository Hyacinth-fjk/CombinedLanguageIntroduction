#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float float_num; /*定义单精度类型变量*/
    float_num = 1.23F; /*为变量赋值*/
    printf("%f\n", float_num); /*输出变量的值*/

    double double_num; /*定义一个双精度类型变量*/
    double_num = 61.458; /*为变量赋值*/
    printf("%lf\n", double_num); /*显示变量值*/

    long double long_double_num; /*定义长双精度变量*/
    long_double_num = 45.257; /*为变量赋值*/
    printf("%Lf\n", long_double_num); /*将变量值进行输出*/

    return EXIT_SUCCESS; /*程序结束*/
}
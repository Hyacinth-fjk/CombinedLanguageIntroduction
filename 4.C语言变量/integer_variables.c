#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int signed_int_num = 10; /*定义有符号基本整型变量*/
    printf("%d\n", signed_int_num); /*显示有符号基本整型变量*/

    unsigned int unsigned_int_num; /*定义无符号基本整型变量*/
    unsigned_int_num = 10U; /*为变量赋值*/

    short signed_short_num; /*定义有符号短整型变量*/
    signed_short_num = 10; /*为变量赋值*/

    unsigned short unsigned_short_num; /*定义无符号短整型变量*/
    unsigned_short_num = 10U; /*为变量赋值*/

    long signed_long_num; /*定义有符号长整型变量*/
    signed_long_num = 10L; /*为变量赋值*/

    unsigned long unsigned_long_num; /*定义无符号长整型变量*/
    unsigned_long_num = 10LU; /*为变量赋值*/

    long long signed_long_long_num; /*定义有符号双长整型变量*/
    signed_long_long_num = 10LL; /*为变量赋值*/

    unsigned long long unsigned_long_long_num; /*定义无符号双长整型变量*/
    unsigned_long_long_num = 10LLU; /*为变量赋值*/

    return EXIT_SUCCESS; /*程序结束*/
}
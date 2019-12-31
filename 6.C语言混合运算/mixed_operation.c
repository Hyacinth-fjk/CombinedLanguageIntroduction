#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int int_num = 1; /*定义整型变量*/
    char char_num = 'A'; /*ASCII码为65*/
    float float_num = 2.2F; /*定义双精度类型变量*/

    double result = (double)int_num + char_num + float_num; /*得到相加的结果*/
    printf("%lf\n", result); /*显示结果*/

    return EXIT_SUCCESS; /*程序结束*/
}
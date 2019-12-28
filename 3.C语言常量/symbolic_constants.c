#include <stdio.h>
#include <stdlib.h>

#define PAI 3.14 /*定义符号变量*/

int main(void)
{
    double radius; /*定义半径变量*/
    double result; /*定义结果变量*/

    printf("请输入圆的半径："); /*提示*/
    scanf_s("%lf", &radius); /*输入数据*/

    result = radius * radius * PAI; /*进行计算*/

    printf("圆的面积为：%lf\n", result); /*显示结果*/

    return EXIT_SUCCESS; /*程序结束*/
}
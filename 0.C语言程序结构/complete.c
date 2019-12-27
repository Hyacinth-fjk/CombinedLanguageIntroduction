#include <stdio.h>
#include <stdlib.h>

#define CUBOID_HEIGHT 10 /*定义常量*/

int calculate(int length, int width); /*函数声明*/

int main(void) {

    int cuboid_length; /*定义整型变量，表示长度*/
    int cuboid_width; /*定义整型变量，表示宽度*/
    int cuboid_volume; /*定义整型变量，表示长方体的体积*/

    printf("长方形的高度为：%d\n", CUBOID_HEIGHT); /*显示提示*/

    printf("请输入长度："); /*显示提示*/
    scanf_s("%d", &cuboid_length); /*输入长方体的长度*/

    printf("请输入宽度："); /*显示提示*/
    scanf_s("%d", &cuboid_width); /*输入长方体的宽度*/

    cuboid_volume = calculate(cuboid_length, cuboid_width); /*调用函数，计算体积*/

    printf("长方体的体积是：%d", cuboid_volume); /*输出体积大小*/

    return EXIT_SUCCESS;
}

int calculate(int length, int width) /*定义计算体积函数*/
{
    int result = length * width * CUBOID_HEIGHT; /*具体计算体积*/

    return result; /*将计算的体积结果返回*/
}
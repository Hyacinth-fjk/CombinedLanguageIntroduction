#include <stdio.h>
#include <stdlib.h>

void add_one(void)
{
    auto int num = 1; /*定义auto整型变量*/

    num = num + 1; /*变量加1*/

    printf("%d\n", num); /*显示结果*/
}

int main(void)
{
    printf("第一次调用：");
    add_one(); /*调用add_one函数*/

    printf("第二次调用：");
    add_one(); /*调用add_one函数*/

    return EXIT_SUCCESS; /*程序结束*/
}
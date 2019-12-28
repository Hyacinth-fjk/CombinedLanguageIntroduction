#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char char_num = 'a'; /*定义字符型变量，并赋值*/
    int int_num = 97; /*定义整型变量，并赋值*/

    printf("%c，%d\n", char_num, char_num); /*显示变量char_num*/
    printf("%d，%c\n", int_num, int_num); /*显示变量int_num*/

    return EXIT_SUCCESS; /*程序结束*/
}
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("长整形常量：%ld\n", 1000L); /*L表示长整形*/
    printf("双长整形常量：%lld\n", 1000LL); /*LL表示长整形*/
    printf("无符号整形常量：%u\n", 500U); /*U表示无符号整形*/

    printf("八进制整数：%o，转为十进制为：%d\n", 0123, 0123); /*在常数前面加上一个0来代表八进制*/
    printf("十进制整数：%d\n", 123);
    printf("十六进制整数：%x，转为十进制为：%d\n", 0x3ba4, 0x3ba4); /*加上前缀0x表示常量为十六进制*/

    return EXIT_SUCCESS;
}
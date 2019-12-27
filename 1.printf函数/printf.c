#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const char* s = "Hello";

    printf("字符串为：\n\t%10s\n\t%-10s\n\t%*s\n", s, s, 10, s);
    printf("字符为:%c %%\n", 65);

    printf("十进制整数为：%i %d %.6i %.0i %+i %u\n", 1, 2, 3, 0, 4, -1);
    printf("十六进制整数为：%x %#x %X %#X\n", 5, 5, 10, 10);
    printf("八进制整数为：%o %#o %#o\n", 10, 10, 4);

    printf("十进制浮点数为：%f %.0f %.20f\n", 1.5, 1.5, 1.3);
    printf("限制位数的浮点数为：:%05.2f %.2f %5.2f\n", 1.500, 1.5, 10.5011);
    printf("指数形式浮点数为：%e %E\n", 1.5, 1.5);
    printf("十六进制浮点数为：%a %A\n", 1.5, 1.5);

    return EXIT_SUCCESS;
}
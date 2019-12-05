#include <stdio.h>

int main(void)
{
	char ch = 'A';
	char str[20] = "Hello World！";
	float flt = 10.234F;
	double db = 20.123456;
	int no = 150;

	printf("字符为：%c\n", ch);
	putchar(ch); /*等价于printf("%c", ch)*/

	printf("\n字符串为：%s\n", str);
	puts(str); /*等价于printf("%s\n", str)，put函数中间不能拼接字符串*/

	printf("浮点数为：%f\n", flt);
	printf("双精度值为：%lf\n", db);
	printf("整数为：%d", no);
	printf("八进制值为：%o\n", no);
	printf("十六进制值为：%x", no);

	return 0;
}
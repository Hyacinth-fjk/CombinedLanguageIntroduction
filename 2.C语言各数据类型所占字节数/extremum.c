#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(void)
{
	printf("数据类型：char，存储大小：%d字节、最小值：%hhd，最大值：%hhd\n", sizeof(char), CHAR_MIN, CHAR_MAX);
	printf("数据类型：unsigned char，存储大小：%d字节、最小值：%hhu，最大值：%hhu\n", sizeof(unsigned char), 0U, UCHAR_MAX);
	printf("数据类型：short，存储大小：%d字节、最小值：%hd，最大值：%hd\n", sizeof(short), SHRT_MIN, SHRT_MAX);
	printf("数据类型：unsigned short，存储大小：%d字节、最小值：%hu，最大值：%hu\n", sizeof(unsigned short), 0U, USHRT_MAX);
	printf("数据类型：int，存储大小：%d字节、最小值：%d，最大值：%d\n", sizeof(int), INT_MIN, INT_MAX);
	printf("数据类型：unsigned int，存储大小：%d字节、最小值：%u，最大值：%u\n", sizeof(unsigned int), 0U, UINT_MAX);
	printf("数据类型：long，存储大小：%d字节、最小值：%ld，最大值：%ld\n", sizeof(long), LONG_MIN, LONG_MAX);
	printf("数据类型：unsigned long，存储大小：%d字节、最小值：%lu，最大值：%lu\n", sizeof(unsigned long), 0LU, ULONG_MAX);
	printf("数据类型：float，存储大小：%d字节、最小值：%g，最大值：%g\n", sizeof(float), FLT_MIN, FLT_MAX);
	printf("数据类型：double，存储大小：%d字节、最小值：%lg，最大值：%lg\n", sizeof(double), DBL_MIN, DBL_MAX);
	printf("数据类型：long long，存储大小：%d字节、最小值：%lld，最大值：%lld\n", sizeof(long long), LLONG_MIN, LLONG_MAX);
	printf("数据类型：unsigned long long，存储大小：%d字节、最小值：%llu，最大值：%llu\n", sizeof(unsigned long long), 0LLU, ULLONG_MAX);
	printf("数据类型：long double，存储大小：%d字节、最小值：%Lg，最大值：%Lg\n", sizeof(long double), LDBL_MIN, LDBL_MAX);

	return EXIT_SUCCESS;
}
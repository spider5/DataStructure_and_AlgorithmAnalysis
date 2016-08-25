/* 测试程序 */
#include <stdio.h>

int main(void)
{
	long int x;
	unsigned int n;

	printf("本程序计算一个数x的n次方\n请输入x,n: ");
	scanf("%ld,%u", &x, &n);
	printf("%ld的%u次方为：%ld\n", x, n, Pow(x,n));

	return 0;
}

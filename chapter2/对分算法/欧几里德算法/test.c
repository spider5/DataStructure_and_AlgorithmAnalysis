/* 测试程序 */
#include <stdio.h>

int main(void)
{
	unsigned int m, n;

	printf("请输入两个正整数：");
	scanf("%u %u", &m, &n);
	printf("%u 和 %u的最大公约数为：%u\n", m, n, Gcd(m,n));
	
	return 0;
}

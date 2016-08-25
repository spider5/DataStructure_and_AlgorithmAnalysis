/* 确定正整数n是否是素数
 * 素数：大于等于2且除了1和它本身以外不再被其他的除数整除。
 * 1既不是素数也不是合数 
 */
#include <stdio.h>

/*  时间复杂度 O(sqrt(N)) */
int IsPrime(int n)
{
	int i;

	if ( n == 1 )
		return 0;
	for ( i = 2; i*i <= n; i++ )
		if ( n % i == 0 )
			return 0;
	return 1;
}

int main(void)
{
	int n;
	int is_prime;

	printf("判断正整数n是否为素数\n");
	printf("请输入n: ");
	scanf("%d", &n);
	is_prime = IsPrime(n);
	if ( is_prime )
		printf("%d是素数\n", n);
	else
		printf("%d不是素数\n", n);
	
	return 0;
}

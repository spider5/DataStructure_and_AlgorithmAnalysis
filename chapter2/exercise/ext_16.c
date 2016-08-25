/* 非递归的快速取幂 */
#include <stdio.h>

/* 时间复杂度 O(logN) */
long int Pow(long int x, unsigned int n)
{
	long int result = 1;
	long base = x;

	while ( n )
	{
		if ( n % 2 )
			result *= base;
		base *= base;
		n /= 2;
	}
	return result;
}

/* 利用位运算，同上 
 * 例如：n=31，将n写成二进制形式：11111
 * 则n=31=2^4+2^3+2^2+2^1+2^0
 * x^n = x^16 * x^8 * x^4 * x^2 * x
 * 令base = x->x^2->x^4->x^8->x^16
 */
long int Pow2(long int x, unsigned int n)
{
	long int result = 1;
	long base = x;

	while ( n )
	{
		if ( n & 1 )
			result *= base;
		base *= base;
		n >>= 1;
	}
	return result;
}
      
int main(void)
{
	unsigned int n;
	long int x, p;

	printf("求x的n次方\n请输入x,n: ");
	scanf("%ld,%u", &x, &n);
	p = Pow(x,n);
	printf("%ld的%u次方为：%ld\n", x, n, p);

	return 0;
}

/* 幂运算，使用递归和二分算法，时间复杂度 O(logN) */
#include <stdio.h>
#define IsEven(x) (((x) % 2) == 0) ? 1: 0

long int Pow(long int x, unsigned int n)
{
	if ( n == 0 )
		return 1;
	if ( IsEven(n) )    // n为偶数
		return Pow(x*x, n/2);
	else                  // n为奇数
		return Pow(x*x, n/2) * x;
}

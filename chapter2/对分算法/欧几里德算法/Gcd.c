/* 欧几里德算法求最大公约数，时间复杂度 O(logN) 
 * 欧几里德算法：
 * 	两个整数的最大公约数（Gcd）是同时整除二者的最大整数
 */

// 欧几里德算法，（假设m，n均为大于零的整数）
unsigned int Gcd(unsigned int m, unsigned int n)
{
	unsigned int rem;

	// m must be greater than n
	if ( m < n )
	{
		rem = m;
		m = n;
		n = rem;
	}
	while ( n > 0 )
	{
		rem = m % n;
		m = n;
		n = rem;
	}
	return m;
}

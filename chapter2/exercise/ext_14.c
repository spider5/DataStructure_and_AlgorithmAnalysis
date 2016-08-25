/* Eratosthenes筛法求小于n的所有素数 
 * Eratosthenes筛法：
 * 	从制作整数2到n的表开始，找出最小的未被删除的整数i，
 * 	打印i，然后删除i，2i，3i，······。当i > n时，算法终止。
 */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define N 1000000

/*  时间复杂度 O(N*logN) */
void Eratosthenes(void)
{
	int i, j, n, p_num;
	bool A[N+1];

	memset(A, 1, sizeof(A));
	/* 1 not a prime number */
	A[1] = 0;
	for ( i = 2; i <= N; i++ )
		if ( A[i] )
			for ( j = 2; (n=j*i) <= N; j++ )
				A[n] = 0;

	/* 显示结果 */
	p_num = 0;
	for ( i = 2; i <= N; i++ )
	{
		if ( A[i] )
		{
			printf("%-6d ", i);
			p_num++;
			if ( p_num % 10 == 0 )
				printf("\n");
		}
	}
	printf("\n");
}

int main(void)
{
	printf("小于%d的所有素数:\n", N);
	Eratosthenes();
	return 0;
}

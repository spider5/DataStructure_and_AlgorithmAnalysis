/* 求最大子序列乘积 */
#include <stdio.h>
#define N 10

int A[N];

/* 时间复杂度 O(N) */
long MaxProductSequenceSum(const int A[], int n)
{
	int i;
	long ThisSum, MaxSum;

	ThisSum = 1; MaxSum = A[0];
	for ( i = 0; i < n; i++ )
	{
		ThisSum *= A[i];
		if ( ThisSum > MaxSum )
			MaxSum = ThisSum;
		if ( ThisSum == 0 )
			ThisSum = 1;
	}
	return MaxSum;
}

int main(void)
{
	int i;
	long max_product_sum;

	printf("计算数组A中的最大子序列乘积\n");
	printf("请输入A[0]~A[%d]:\n", N-1);
	for ( i = 0; i < N; i++ )
		scanf("%d", A+i);
	max_product_sum = MaxProductSequenceSum(A, N);
	printf("数组A的最大子序列乘积为: %ld\n", max_product_sum);

	return 0;
}

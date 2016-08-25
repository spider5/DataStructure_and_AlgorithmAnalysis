/* 求最小的正子序列和 */
#include <stdio.h>
#define N 7
#define No -1
int A[N];


/* 时间复杂度 O(N*N*N) */
int MinPositiveSequenceSum1(const int A[], int n)
{
	int i, j, k;
	int ThisPositiveSum;
	int MinPositiveSum;

	for ( i = 0; i < n; i++ )
		if ( A[i] > 0 )
		{
			MinPositiveSum = A[i];
			break;
		}
	/* All is negative */
	if ( i == n )
		return No;

	for ( ; i < n; i++ )
	{
		if ( A[i] < 0 )
			continue;
		for ( j = i+1; j < n; j++ )
		{
			if ( A[j] < 0 )
				break;
			ThisPositiveSum = 0;
			for ( k = i; k <= j; k++ )
			{
				if ( A[k] < 0 )
					break;
				ThisPositiveSum += A[k];
				if ( ThisPositiveSum < MinPositiveSum )
					MinPositiveSum = ThisPositiveSum;
			}
		}
	}
	return MinPositiveSum;
}

/* 时间复杂度 O(N) */
int MinPositiveSequenceSum2(const int A[], int n)
{
	int i;
	int min;

	min = -1;
	for ( i = 0; i < n; i++ )
	{
		if ( A[i] < 0 )
			continue;
		else if ( A[i] == 0 ) 
			return 0;
		else
			if ( min == -1 )
				min = A[i];
			else
				if ( min > A[i] )
					min = A[i];
	}
	return min;
}


int main(void)
{
	int i;
	int min_positive_sum;

	printf("计算数组A中的最小正子序列和\n");
	printf("请输入A[0]~A[%d]:\n", N-1);
	for ( i = 0; i < N; i++ )
		scanf("%d", A+i);
	min_positive_sum = MinPositiveSequenceSum2(A, N);
	if ( min_positive_sum >= 0 )
		printf("最小的正子序列和为: %d\n", min_positive_sum);
	else
		printf("数组A没有最小正子序列\n");

	return 0;
}

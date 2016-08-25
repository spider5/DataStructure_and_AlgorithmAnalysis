/* 求最小子序列和 */
#include <stdio.h>
#define N 10
int A[N];

/* 时间复杂度 O(N*N*N) */

int MinSequenceSum1(const int A[], int n)
{
	int i,j,k;
	int ThisSum, MinSum;

	MinSum = A[0];
	for ( i = 0; i < N-1; i++ )
	{
		for ( j = i+1; j < N; j++ )
		{
			ThisSum = 0;
			for ( k = i; k <= j; k++ )
				ThisSum += A[k];
			if ( ThisSum < MinSum )
				MinSum = ThisSum;
		}
	}
	return MinSum;
}

/* 时间复杂度 O(N*N) */
int MinSequenceSum2(const int A[], int n)
{
	int i, j;
	int ThisSum, MinSum;

	MinSum = A[0];
	for ( i = 0; i < n; i++ )
	{
		ThisSum = 0;
		for ( j = i; j < n; j++ )
		{
			ThisSum += A[j];
			if ( ThisSum < MinSum )
				MinSum = ThisSum;
		}
	}
	return MinSum;
}


/* 时间复杂度 O(N) */
int MinSequenceSum4(const int A[], int n)
{
	int i, j;
	int ThisSum, MinSum;

	ThisSum = MinSum = A[0];
	for ( i = 0; i < n; i++ )
	{
		ThisSum += A[i];
		if ( ThisSum < MinSum )
			MinSum = ThisSum;
		else if ( ThisSum > 0 )
			ThisSum = 0;
	}
	return MinSum;
}


int main(void)
{
	int i;
	int min_sum;

	printf("计算数组A中的最小子序列和\n");
	printf("请输入A[0]~A[%d]: \n", N-1);
	for ( i = 0; i < N; i++ )
		scanf("%d", A+i);
	min_sum = MinSequenceSum1(A, N);
	printf("数组A的最小子序列为：%d\n", min_sum);

	return 0;
}

/* 使用递归和分治策略计算，时间复杂度O(NlogN)  */
#include <stdio.h>

static int Max3(int a, int b, int c)
{
	int max;
	
	max = (a>b)?a:b;
	if ( max < c )
		max = c;
	return max;
}

static int MaxSubSum(const int array[], int left, int right)
{
	int MaxLeftSum, MaxRightSum;
	int MaxLeftBorderSum, MaxRightBorderSum;
	int LeftBorderSum, RightBorderSum;
	int center, i;

	if ( left == right )      /* Base case */
		if ( array[left] > 0 )
			return array[left];
		else
			return 0;

	center = (left + right) / 2;
	MaxLeftSum = MaxSubSum(array, left, center);
	MaxRightSum = MaxSubSum(array, center+1, right);

	MaxLeftBorderSum = 0; LeftBorderSum = 0;
	for ( i = center; i >= left; i-- )
	{
		LeftBorderSum += array[i];
		if ( LeftBorderSum > MaxLeftBorderSum )
			MaxLeftBorderSum = LeftBorderSum;
	}
	MaxRightBorderSum = 0; RightBorderSum = 0;
	for ( i = center+1; i <= right; i++ )
	{
		RightBorderSum += array[i];
		if ( RightBorderSum > MaxRightBorderSum )
			MaxRightBorderSum = RightBorderSum;
	}
	printf("%d %d %d %d\n", MaxLeftSum, MaxRightSum, MaxLeftBorderSum, MaxRightBorderSum);
	return Max3(MaxLeftSum, MaxRightSum, MaxLeftBorderSum+MaxRightBorderSum);
}

int MaxSubsequenceSum(const int array[], int n)
{
	return MaxSubSum( array, 0, n-1);
}

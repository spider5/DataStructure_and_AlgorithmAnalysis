/* 时间复杂度 O(N) */
#include <stdio.h>

int MaxSubsequenceSum(const int array[], int n)
{
	int ThisSum, MaxSum, i;

	ThisSum = MaxSum = 0;
	for ( i = 0; i < n; i++ )
	{
		ThisSum += array[i];

		if ( ThisSum > MaxSum )
			MaxSum = ThisSum;
		else if ( ThisSum < 0 )
			ThisSum = 0;
	}
	return MaxSum;
}

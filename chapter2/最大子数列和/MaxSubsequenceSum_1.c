/* 使用穷举法求解 */

int MaxSubsequenceSum(const int array[], int n)
{
	int ThisSum, MaxSum, i, j, k;

	MaxSum = 0;
	for ( i = 0; i < n; i++ )
	{
		for ( j = i; j < n; j++ )
		{
			ThisSum = 0;
			for ( k = i; k <= j; k++ )
				ThisSum += array[k];
			if ( ThisSum > MaxSum ) 
				MaxSum = ThisSum;
		}
	}
	return MaxSum;
}

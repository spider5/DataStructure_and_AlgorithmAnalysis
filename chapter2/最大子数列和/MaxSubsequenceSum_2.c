/* 撤除一个for循环提高运行时间 */

int MaxSubsequenceSum(const int array[], int n)
{
	int ThisSum, MaxSum, i, j;

	MaxSum = 0;
	for ( i = 0; i < n; i++ )
	{
		ThisSum = 0;
		for ( j = i; j < n; j++ )
		{
			ThisSum += array[j];
			if ( ThisSum > MaxSum )
				MaxSum = ThisSum;
		}
	}
	return MaxSum;
}

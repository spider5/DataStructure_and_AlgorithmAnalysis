/* 对分查找，时间复杂度 O(logN) */
#include <stdio.h>
#include "head.h"

/* 对分查找算法 
 * 数组array已经预先排序 
 * */
int BinarySearch(const ElementType array[], ElementType x, int n)
{
	int Low, Mid, High;

	Low = 0; High = n - 1;
	while ( Low <= High )
	{
		Mid = (Low + High) / 2;
		if ( array[Mid] < x )
			Low = Mid + 1;
		else if ( array[Mid] > x )
			High = Mid - 1;
		else
			return Mid;      /* Found */
	}
	return NotFound;                 /* NotFound is defined as -1 */
}



/* 测试程序 */
#include <stdio.h>
#include "head.h"
#define N 10


int main(void)
{
	ElementType array[N] = {
		2, 3, 7, 9, 12, 14, 40, 45, 56, 78
	};
	ElementType x;
	ElementType find;

	printf("请输入要查找的数：");
	scanf("%d", &x);

	find = BinarySearch(array, x, N);
	if ( find == -1 )
		printf("没有找到\n");
	else
		printf("%d 找到，位于%d处\n", x, find+1);
	return 0;
}

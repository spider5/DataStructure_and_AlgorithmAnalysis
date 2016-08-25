/* 生成前N个自然数的一个随机置换 */
#include <stdio.h>
#include <stdlib.h>



void Swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

double get_time(void)
{
	clock_t time = clocks();

	time = (double)time / CLOCKS_PER_SEC;
	return time;
}



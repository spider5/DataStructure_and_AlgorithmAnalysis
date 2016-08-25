/* 随机数生成器 RandInt(i, j) :
 * 	以相同的概率生成i到j的一个整数
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RandInt(int i, int j)
{
	int r;

	srand((unsigned int)time(NULL));
	r = rand();
	r = i+r%(j-i)+1;
	return r;
}

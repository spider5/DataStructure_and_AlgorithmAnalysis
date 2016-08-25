/* 调用程序 */
#include <stdio.h>
#define N 100

int main(void)
{
	int array[N];
	int i, num, MaxSum;

	printf("请输入数列项数：");
	scanf("%d", &num);

	for ( i = 0; i < num; i++ )
		scanf("%d", array+i);
	MaxSum = MaxSubsequenceSum(array, num);
	printf("该数列的最大子数列为：%d\n", MaxSum);

	return 0;
}

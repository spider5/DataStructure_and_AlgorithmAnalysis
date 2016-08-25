/* 确定在整数A1 < A2 < A3 < ... < An的数组中
 * 是否存在整数i使得Ai = i
 * 运行时间O(N)
 */
#include <stdio.h>
#include <stdbool.h>
#define N 10

int  IsiInAi(const int A[], int n)
{
	int i;

	for ( i = 0; i < n; i++ )
		if ( A[i] == i )
			return i;
	return -1;
}

int main(void)
{
	int A[N];
	int i;
	int find;

	printf("请输入数组A[0]~A[%d]:\n", N-1);
	for ( i = 0; i < N; i++ )
		scanf("%d", A+i);
	find = IsiInAi(A, N);
	if ( find == -1 )
		printf("Not Found\n");
	else
		printf("Found A[%d] = %d\n", find, find );

	return 0;
}

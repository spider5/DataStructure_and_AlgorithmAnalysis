/* 计算F(x) = A1*x + A2*x*x + A3*x*x*x + ... + An*x*x*...*x 的运行时间
 *                                                |__ n __|
 */
#include <stdio.h>
#include <time.h>
#define N 20
#define IsEven(x) ((x) % 2 == 0) ? 1: 0

double A[N];

double Pow(double x, int n)
{
	int i;
	double s = 1;

	for ( i = 0; i < n; i++ )
		s*=x;
	return s;
}

double Pow2(double x, int n)
{
	if ( n <= 0 )
		return 1.0;
	if ( IsEven(n) )
		return Pow2(x*x, n/2);
	else
		return Pow2(x*x, n/2) * x;
}

double F(double x)
{
	int i;
	double f = 1;

	for ( i = 0; i < N; i++ )
		f += A[i] * Pow(x, i);
	return f;
} 

int main(void)
{
	int i;
	double x, f;
	double start, end;

	printf("x: ");
	scanf("%lf", &x);
	printf("A[0]~A[%d]: \n", N-1);
	for ( i = 0; i < N; i++ )
		scanf("%lf", A+i);
	start = (double)clock() / CLOCKS_PER_SEC;
	f = F(x);
	end = (double)clock() / CLOCKS_PER_SEC;
	printf("F(%.2lf) = %.2lf\n", x, f);
	printf("Using time %.2lf\n", end-start);
}

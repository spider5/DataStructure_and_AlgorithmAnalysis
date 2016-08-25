/* Horner法则 
 * 计算F(x) = sum Ai*x^i
 */
#include <stdio.h>
#define N 5

double A[N] = {2,1,0,8,4};

double Horner(double x)
{
	int i;
	double Poly;

	Poly = 0;
	for ( i = N; i >= 0; i-- )
		Poly = x * Poly + A[i];
	return Poly;
}

int main(void)
{
	double x, result;

	printf("计算F(x) = A1 + A2*x + A3*x*x + ...\n");
	printf("请输入x: ");
	scanf("%lf", &x);
	result = Horner(x);
	printf("F(%.2lf) = %.2lf\n", x, result);

	return 0;
}

#include <stdio.h>
int main()
{
	int a, b, x, l;
	scanf("%d %d %d %d", &a, &b, &x, &l);
	printf("%.6lf", ((double)l / (double)(a + b))*x);
	return 0;
}
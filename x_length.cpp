#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%.3lf", (a + b) * PI + (a+b)*sqrt(2));
	return 0;
}
#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846
int main()
{
	double r,n;
	scanf("%lf %lf", &r, &n);
	double d = (90 - ((double)180 / n))*PI / double(180);
	
	printf("%.3lf",cos(d) *sin(d)* r * r * n);
	return 0;
}
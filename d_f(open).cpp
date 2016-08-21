#include <stdio.h>
int main()
{
	double a,c;
	int b;
	scanf("%lf", &a);
	b = a;
	c = a - b;
	if (c < 0)
	{
		c += 1;
		b += -1;
	}
	printf("%d %.2lf", b, c);
	return 0;
}
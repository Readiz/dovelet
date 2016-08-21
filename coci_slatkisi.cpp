#include <stdio.h>
int pow(int c)
{
	int ret = 1;
	while (c)
	{
		ret *= 10;
		c--;
	}
	return ret;
}
int main()
{
	int a, b,c;
	scanf("%d %d", &a, &b);
	b = pow(b);
	c = a % b;
	if (a%b >= 5*(b/10))
	{
		a = a - c + b;
	}
	else
	{
		a = a - c;
	}
	printf("%d", a);
	return 0;
}
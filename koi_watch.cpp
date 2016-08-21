#include <stdio.h>
int main()
{
	int a, b, c,n,p;
	scanf("%d %d %d", &a, &b, &c);
	n = a * 3600 + b * 60 + c;
	scanf("%d", &p);
	n += p;
	n %= 3600 * 24;
	printf("%d %d %d", n / 3600, (n % 3600) / 60, (n % 3600) % 60);
}
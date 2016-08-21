#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	n = 1000 - n;
	printf("%d %d %d", n / 100, (n % 100) / 50, ((n % 100)%50) / 10);
	return 0;
}
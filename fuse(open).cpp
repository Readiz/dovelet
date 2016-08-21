#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int x = 5 * a + 4 * b + c;
	if (x % 10 != 0)
		printf("%d amperes" , x - (x % 10) + 10);
	else
		printf("%d amperes", x);
	return 0;
}
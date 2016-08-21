#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", 4 * (a-2) + 4 *(b-2) + 4 *(c-2));
	return 0;
}
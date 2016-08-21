#include <stdio.h>
#define max(a,b) (a>b)?(a):(b)
#define min(a,b) (a<b)?(a):(b)
int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d", max(min(x, y), x));
}
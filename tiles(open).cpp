#include <stdio.h>
int main()
{
	int a, b,c=0,d=0, e= 0;
	scanf("%d %d", &a, &b);
	if (a % 8 == 0 && b % 8 == 0)
		c = d = 0;
	else if (a % 8 == 0)
		c = a / 8;
	else if (b % 8 == 0)
		d = b / 8;
	else
		c = a / 8, d = (b / 8)  , e =  1;

	printf("The number of whole tiles is %d part tiles is %d", (a/8) * (b/8),c + d + e);
	return 0;
}
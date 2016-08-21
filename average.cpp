#include <stdio.h>
int main()
{
	int a =0, i,t;
	for (i = 0; i < 4; i++)
	{
		scanf("%d", &t);
		a += t;
	}
	printf("%.2lf", double(a)/ double(4));
	return 0;
}
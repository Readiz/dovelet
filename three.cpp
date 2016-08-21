#include <stdio.h>
int main()
{
	int n,m,sum = 0,ten = 1;
	scanf("%d", &n);
	scanf("%d", &m);
	for (int i = 0; i < 3; i++)
	{
		int p = m % 10;
		printf("%d\n", n*p);
		sum += n * p * ten;
		ten *= 10;
		m /= 10;
	}
	printf("%d", sum);
	return 0;
}
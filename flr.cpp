#include <stdio.h>
int main()
{
	int n, i = 1;
	scanf("%d", &n);
	while ((1 << i) - 1 < n)
	{
		i++;
	}
	printf("%d", i);
	return 0;
}
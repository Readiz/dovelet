#include <stdio.h>
int main()
{
	int a, b,ans = 0;
	scanf("%d %d", &a, &b);
	while (b > 1)
	{
		ans += b / a;
		b = b/a + b%a;
	}
	printf("%d", ans*100);
	return 0;
}
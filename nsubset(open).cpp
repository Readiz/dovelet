#include <stdio.h>
typedef long long ll;
ll get(int n, int m)
{
	int i = 1;
	ll ret = 1;
	while (i <= n)
	{
		ret *= m;
		i++;
	}
	return ret;
}
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	printf("%lld", get(n, m));
	return 0;
}
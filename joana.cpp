#include <stdio.h>
typedef long long ll;
int main()
{
	int n;
	ll ans = 15;
	scanf("%d", &n);
	if (n == 1)
	{
		printf("1");
		return 0;
	}
	ll k = n / 2;
	if (k > 1)ans += (k - 1) * 30;
	if (k > 2)ans += ((k - 2)*(k - 1) / 2) * 12;
	printf("%lld", ans);
	return 0;
}
#include <stdio.h>
typedef long long ll;
int main()
{
	ll a, b, c, d;
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
	printf("%lld %lld", (d - b) / (c - a), b - a * (d - b) / (c - a));
}
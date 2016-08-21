#include <stdio.h>
typedef long long ll;
int main()
{
	ll N, K, T, F;
	scanf("%lld %lld %lld %lld", &N, &K, &T, &F);
	printf("%lld", N + K*(F - N) / (K - 1));
	return 0;
}
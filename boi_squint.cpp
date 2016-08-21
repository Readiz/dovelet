#include <stdio.h>
#include <math.h>
typedef long long ll;
int main()
{
	ll n,temp;
	scanf("%lld", &n);
	temp = sqrt(n);
	if (temp * temp == n)
		printf("%lld", temp);
	else
		printf("%lld", temp + 1);
	return 0;
}
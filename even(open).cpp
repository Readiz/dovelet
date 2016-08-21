#include <stdio.h>
#include <math.h>
typedef long long ll;
int main()
{
	ll A, B,i,j,ans = 0;
	scanf("%lld %lld", &A, &B);
	i = sqrt(A);
	j = sqrt(B);
	for (i; i <= j; i++)
	{
		if(i *i >= A && i * i <= B)
			ans++;
	}
	printf("%d", (B-A) - ans + 1);
	return 0;
}
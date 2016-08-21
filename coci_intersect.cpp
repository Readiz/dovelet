#include <stdio.h>
int main()
{
	int n, i, j, k,cnt = 0;
	scanf("%d", &n);
	for (i = 2; i <= n; i++) // 1번 기준으로 i번 점에 이을 때
	{
		for (j = 2; j < i; j++)
		{
			for (k = i + 1; k <= n; k++)
			{
				cnt++;
			}
		}
	}
	printf("%d", cnt * n / 4); //2개의 대각선이 만나므로 4개의 점에서 출발할 때 중복됨
	return 0;
}
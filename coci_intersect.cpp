#include <stdio.h>
int main()
{
	int n, i, j, k,cnt = 0;
	scanf("%d", &n);
	for (i = 2; i <= n; i++) // 1�� �������� i�� ���� ���� ��
	{
		for (j = 2; j < i; j++)
		{
			for (k = i + 1; k <= n; k++)
			{
				cnt++;
			}
		}
	}
	printf("%d", cnt * n / 4); //2���� �밢���� �����Ƿ� 4���� ������ ����� �� �ߺ���
	return 0;
}
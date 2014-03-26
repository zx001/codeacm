#include<stdio.h>

int main()
{
	int f[1001], g[1001], m, n, i, j, min;
	min = 1000000000;
	scanf("%d%d", &m, &n);
	for(i = 0; i < m; i++) scanf("%d", &f[i]);
	for(j = 0; j < n; j++)
	{
		scanf("%d", &g[j]);
		for(i = 0; i < m; i++) if(abs(f[i] - g[j]) < min) min = abs(f[i] - g[j]);
	}
	printf("%d\n", min);
	return 0;
}

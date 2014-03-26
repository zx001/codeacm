#include<stdio.h> 
#include<string.h>
#define MAXN 110

int max(int x, int y)
{
	if(x >= y) return x;
	return y;
}

int d[MAXN][MAXN], a[MAXN][MAXN], n;

int dfs(int i, int j)
{
	printf("%d\n", a[i][j]);
	if(a[i][j] >= 0) return a[i][j];
	return a[i][j] = d[i][j] + (i == n ? 0 : max(dfs(i + 1, j), dfs(i + 1, j + 1)));
}

int main()
{
	int i, j;
	scanf("%d", &n);
	memset(a, -1, sizeof(a));
	for(i = 1; i <= n; i++) for(j = 1; j <= i; j++) scanf("%d", &d[i][j]);
	printf("%d\n", dfs(1, 1));
	return 0;
}

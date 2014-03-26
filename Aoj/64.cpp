#include<stdio.h> 
#include<string.h>
#define MAXN 110

int d[MAXN][MAXN], n;

int dfs(int i, int j)
{
	if(d[i][j] >= 0) return d[i][j];
	return d[i][j] = d[i][j] + (i == n ? 0 : (dfs(i + 1, j) >? dfs(i + 1, j + 1)));
}

int main()
{
	int i, j;
	scanf("%d", &n);
	memset(d, -1, sizeof(d));
	for(i = 1; i <= n; i++) for(j = 1; j <= i; j++) scanf("%d", &d[i][j]);
	printf("%d\n", dfs(1, 1));
	return 0;
}

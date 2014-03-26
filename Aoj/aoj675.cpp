#include<stdio.h>
#include<string.h> 
#define MAXN 100001

int main()
{
	int i, j, sum[MAXN], a[MAXN], pos[MAXN], n, l = 9999999, r;
	memset(pos, -1, sizeof(pos));
	scanf("%d", &n);
	sum[0] = 0;
	pos[sum[0]] = 0;
	for(i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
		sum[i] = (a[i] + sum[i - 1]) % n;
		if(pos[sum[i]] != -1 && l > pos[sum[i]])
		{
			l = pos[sum[i]];
			r = i;
		}
		else pos[sum[i]] = i;
	}
	printf("%d %d\n", l + 1, r);
	return 0;
}

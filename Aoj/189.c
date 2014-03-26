#include<stdio.h> 
#include<string.h>
#define MAXN 8000

int main()
{
	int a[MAXN], len_of_a[MAXN], n, i, j, max = 0;
	while(scanf("%d", &n) == 1)
	{
		memset(len_of_a, 0, sizeof(len_of_a));
		len_of_a[0] = 1;
		for(i = 0; i < n; i++) scanf("%d", &a[i]);
		for(i = 1; i < n; i++)
		{
			for(max = 0, j = i - 1; j >= 0; j--) if(a[i] > a[j] && len_of_a[j] > max) max = len_of_a[j];
			len_of_a[i] = max + 1;
		}
		for(max = i = 0; i < n; i++) if(len_of_a[i] > max) max = len_of_a[i];
		printf("%d\n", max);
	}
	return 0;
}

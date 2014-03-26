#include<stdio.h>
#include<string.h>
#define MAXN 10010
 
int a[MAXN], b[MAXN];
int main()
{
    int t, n, i, j, max;
    scanf("%d", &t);
    while(t--)
    {
        memset(b, 0, sizeof(b));
        scanf("%d", &n);
        for(i = 0; i < n; i++) scanf("%d", &a[i]);
        for(i = 0; i < n; i++)
            for(j = i; j < n; j++) if(a[j] == a[i]) b[i]++;
        for(max = i = 0; i < n; i++) if(b[i] > max) max = b[i];
        printf("%d\n", max);
    }
    return 0;
}

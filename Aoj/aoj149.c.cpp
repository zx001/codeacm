#include<cstdio>
#include<algorithm>
#include<string.h>
 
using namespace std;
const int maxn = 10010;
 
int a[maxn], b[maxn];
int main()
{
    int t, n;
    scanf("%d", &t);
    while(t--)
    {
        memset(b, 0, sizeof(b));
        int j = 0;
        scanf("%d", &n);
        for(int i = 0; i < n; i++) scanf("%d", &a[i]);
        sort(a, a+n);
        for(int i = 1; i < n; i++)
           if(a[i] != a[i - 1]) j++;
            else b[j]++;
        sort(b, b+j+1);
        printf("%d\n", b[j] + 1);
    }
    return 0;
 } 

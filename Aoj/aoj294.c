#include<stdio.h> 
#include<string.h>
#define MAXN 350

double c[MAXN][MAXN];

double work(int x, double y){
	int i;
	double t = 1;
	for(i = 0; i < x; i++) t *= y;
	return t;
}

int main(){
	int i, j, n;
	double m, k, ans;
	memset(c, 0, sizeof(c));
	c[0][0] = 1;
	for(i = 1; i < 340; i++)
		for(j = 1; j <= i; j++)
			c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
	while(~scanf("%d%lf", &n, &m)){
		ans = 0;
		for(i = n; i < 2 * n; i++)
			ans += c[i][n]*work(n, m)*work(i - n, 1 - m);
			printf("%.6f\n", ans);
	}
	return 0;
}

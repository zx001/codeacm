#include<stdio.h> 

int main()
{
	int n, i;
	while(scanf("%d", &n), n)
	{
		i = 0;
		while(n > 1) 
		{
			if(n%3) n = n/3 + 1;
			else n /= 3;
			i++;
		}
		printf("%d\n", i);
	}
	return 0;
}

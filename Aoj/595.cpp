#include<stdio.h> 
#include<string.h>
#define maxn 1010

char maze[maxn][maxn];
int vis[maxn][maxn], n, m, qx[maxn*maxn],qy[maxn*maxn], rear_x[maxn][maxn], rear_y[maxn][maxn];
int dx[4] = {-1, 0, 0, 1}, dy[4] = {0, -1, 1, 0};

int bfs(int x, int y)
{
	int front = 0, rear = 0;
	qx[rear] = x; qy[rear++] = y;	vis[x][y] = 1;
	rear_x[x][y] = x; rear_y[x][y] = y;
	while(rear > front)
	{
		int nx, ny, rx, ry;
		x = qx[front]; y = qy[front++];
	//	printf("%d %d\n", x, y);
		for(int i = 0; i < 4; i++)
		{
			nx = rx = x + dx[i]; ny = ry = y + dy[i];
			while(nx < 0) nx += n;
			while(nx >= n) nx -= n;
			while(ny < 0) ny += m;
			while(ny >= m) ny -= m;
		//	printf("%d %d  %d %d\n", rx, ry, nx, ny);
			if(vis[nx][ny]) {
				if(rx != rear_x[nx][ny] || ry != rear_y[nx][ny]) 
					return 1;
			}
			else if(maze[nx][ny] != '#')
		 		{
		 			rear_x[nx][ny] = rx; rear_y[nx][ny] = ry;
					qx[rear] = rx; qy[rear++] = ry;
					vis[nx][ny] = 1;
				}
		}
	}
	return 0;
}

int main()
{
	int T, stx, sty;
	scanf("%d", &T);
	while(T--)
	{
		memset(vis, 0, sizeof(vis));
		scanf("%d%d", &n, &m);
		for(int i = 0; i < n; i++)
		{
			scanf("%s", maze[i]);
			for(int j = 0; j < m; j++)
			{
				
				if(maze[i][j] == 'S')
				{
					stx = i;
					sty = j;
				}
			}
		}
		if(bfs(stx, sty)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

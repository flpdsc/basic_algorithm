//토마토(BFS 활용)
#include <stdio.h>

int box[1010][1010], dst[1010][1010];
int dx[4]={0, 1, 0, -1}; 
int dy[4]={-1, 0, 1, 0};
int front, rear, queue[1010][2];

void push(int x, int y)
{
  queue[rear][0] = x;
  queue[rear][1] = y;
  ++rear;
}

int main(void)
{
	freopen("../data/89_input.txt", "rt", stdin);
	int m, n, res=-2147000000;
	scanf("%d %d", &m, &n);
	for(int i=1; i<=n; ++i) {
		for(int j=1; j<=m; ++j) {
			scanf("%d", &box[i][j]);
			if(box[i][j]==1) push(i, j);
		}
	}
	while(rear!=front){
		int tmp_x = queue[front][0];
		int tmp_y = queue[front][1];
		front++;
		for(int i=0; i<4; ++i) {
			int xx=tmp_x+dx[i];
			int yy=tmp_y+dy[i];
			if(box[xx][yy]==0) {
				if(xx>=1&&xx<=n&&yy>=1&yy<=m) {
					push(xx, yy);
					box[xx][yy] = 1;
					dst[xx][yy] = dst[tmp_x][tmp_y] +1;
                    if(res<dst[xx][yy]) res = dst[xx][yy];
				}
			}
		}
	}
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=m; ++j){
			if(box[i][j]==0){
				printf("-1\n");
				return 0;
			}
		}
	}
	printf("%d\n", res);
	return 0;
}
//미로의 최단거리 통로(BFS 활용)
#include <stdio.h>

int map[8][8], dst[8][8], queue[50][2];
int front, rear;
int dx[4]={0, 1, 0, -1}, dy[4]={1, 0, -1, 0};

void push(int x, int y)
{
  queue[rear][0] = x;
  queue[rear][1] = y;
  ++rear;
}

int main(void)
{
    freopen("../data/88_input.txt", "rt", stdin);
    for(int i=1; i<=7; ++i){
        for(int j=1; j<=7; ++j){
            scanf("%d", &map[i][j]);
        }
    }
    push(1, 1);
    map[1][1] = 1;
    while(front!=rear){
        int tmp_x = queue[front][0];
        int tmp_y = queue[front][1];
        front++;
        for(int i=0; i<4; ++i){
            int xx = tmp_x+dx[i];
            int yy = tmp_y+dy[i];
            if(map[xx][yy]==0 && xx>0 && xx<8 && yy>0 && yy<8){
                push(xx, yy);
                map[xx][yy] = 1;
                dst[xx][yy] = dst[tmp_x][tmp_y] + 1;
            }
        }
    }
    if(map[7][7]==1) printf("%d\n", dst[7][7]);
    else printf("-1\n"); 
    return 0;
}
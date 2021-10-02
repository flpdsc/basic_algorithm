//섬나라 아일랜드(BFS 활용)
#include <stdio.h>

int map[22][22], queue[50][2];
int front, rear;
int dx[8]={1, 1, 0, -1, 0, -1, -1, 1};
int dy[8]={0, 1, 1, 1, -1, -1, 0, -1};

void push(int x, int y)
{
  queue[rear][0] = x;
  queue[rear][1] = y;
  ++rear;
}

// int pop(void)
// {
//   int tmp = front;
//   ++front;
//   return tmp;
// }

int main(void)
{
    freopen("../data/87_input.txt", "rt", stdin);
    int i, j, n, cnt=0;
    scanf("%d", &n);
    for(i=1; i<=n; ++i){
        for(j=1; j<=n; ++j){
            scanf("%d", &map[i][j]);
        }
    }
    for(i=1; i<=n; ++i){
        for(j=1; j<=n; ++j){
            if(map[i][j]==1){
                push(i, j);
                map[i][j] = 0;
                while(front!=rear){
                    int tmp_x = queue[front][0];
                    int tmp_y = queue[front][1];
                    // pop();
                    ++front;
                    for(int i=0; i<8; ++i){
                        int xx = tmp_x+dx[i];
                        int yy = tmp_y+dy[i];
                        if(map[xx][yy]==1){
                            push(xx, yy);
                            map[xx][yy] = 0;
                        }
                    }
                }
                cnt++;
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}
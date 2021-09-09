//미로탐색(DFS)
#include <iostream>
using namespace std;

int map[8][8], chk[8][8], cnt=0, dx[4]={1, 0, -1, 0}, dy[4]={0, 1, 0, -1};

void DFS(int x, int y)
{
    int xx, yy;
    if(x==7&&y==7) cnt++;
    else{
        for(int i=0; i<4; ++i){
            xx = x+dx[i];
            yy = y+dy[i]; 
            if(xx<1||xx>7||yy<1||yy>7) continue;
            if(map[xx][yy]==0&&chk[xx][yy]==0){
                chk[xx][yy] = 1;
                DFS(xx, yy);
                chk[xx][yy] = 0;
            } 
        }
    }
}
int main()
{
    freopen("../data/65_input.txt", "rt", stdin);
    for(int i=1; i<=7; ++i){
        for(int j=1; j<=7; ++j){
            cin >> map[i][j];
        }
    }
    chk[1][1] = 1;
    DFS(1, 1);
    cout << cnt << endl;
    return 0;
}
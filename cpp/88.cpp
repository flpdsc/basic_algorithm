//미로의 최단거리 통로(BFS 활용)
#include <iostream>
#include <queue>
using namespace std;
int map[8][8], dst[8][8];
int dx[4]={0, 1, 0, -1}, dy[4]={1, 0, -1, 0};

struct Loc{
    int x, y;
    Loc(int a, int b){
        x = a;
        y = b;
    }
};

int main()
{
    freopen("../data/88_input.txt", "rt", stdin);
    int i, j;
    queue<Loc> Q;
    for(i=1; i<=7; ++i){
        for(j=1; j<=7; ++j){
            cin >> map[i][j];
        }
    }
    Q.push(Loc(1, 1));
    map[1][1] = 1;
    while(!Q.empty()){
        Loc tmp = Q.front();
        Q.pop();
        for(i=0; i<4; ++i){
            int xx = tmp.x+dx[i];
            int yy = tmp.y+dy[i];
            if(map[xx][yy]==0 && xx>0 && xx<8 && yy>0 && yy<8){
                Q.push(Loc(xx, yy));
                map[xx][yy] = 1;
                dst[xx][yy] = dst[tmp.x][tmp.y] + 1;
            }
        }
    }
    if(map[7][7]==1) cout << dst[7][7] << endl;
    else cout << -1 << endl;
    return 0;
}
//섬나라 아일랜드(BFS 활용)
#include <iostream>
#include <queue>
using namespace std;
int map[22][22];
int dx[8]={1, 1, 0, -1, 0, -1, -1, 1};
int dy[8]={0, 1, 1, 1, -1, -1, 0, -1};
struct Loc{
    int x, y;
    Loc(int a, int b){
        x = a;
        y = b;
    }
};

int main()
{
    freopen("../data/87_input.txt", "rt", stdin);
    int i, j, n, cnt=0;
    queue<Loc> Q;
    cin >> n;
    for(i=1; i<=n; ++i){
        for(j=1; j<=n; ++j){
            cin >> map[i][j];
        }
    }
    for(i=1; i<=n; ++i){
        for(j=1; j<=n; ++j){
            if(map[i][j]==1){
                Q.push(Loc(i, j));
                map[i][j] = 0;
                while(!Q.empty()){
                    Loc tmp = Q.front();
                    Q.pop();
                    for(int i=0; i<8; ++i){ //8방향 탐색
                        int xx = tmp.x+dx[i];
                        int yy = tmp.y+dy[i];
                        if(map[xx][yy]==1){
                            Q.push(Loc(xx, yy));
                            map[xx][yy] = 0;
                        }
                    }
                }
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
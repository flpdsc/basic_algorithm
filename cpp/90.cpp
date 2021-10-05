//라이언 킹 심바(BFS활용)
#include <iostream>
#include <queue>
using namespace std;

int map[26][26], ch[26][26];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

struct State{
    int x, y, dist; //심바가 움직이는 좌표와 출발지에서 부터의 거리
    State(int a, int b, int c){
        x = a;
        y = b;
        dist = c;
    }
    bool operator<(const State &bb)const{
        if(dist==bb.dist){
            if(x==bb.x) return y>bb.y; //3. 거리가 같고 x좌표가 같을 경우 y좌표최소(왼쪽)
            else return x>bb.x; //2. 거리가 같고 x좌표가 같지 않을 경우 x좌표최소(위쪽)
        }
        else return dist>bb.dist; //1. 거리가 같지 않을 경우 거리최소
    }
};

struct Lion{
    int x, y, s, e; //심바의 출발점 좌표, 사이즈, 토끼먹은 상태
    void sizeUp(){
        s++;
        e = 0;
    }
};

int main()
{
    freopen("../data/90_input.txt", "rt", stdin);

    int n, res=0;
    priority_queue<State> Q;
    Lion simba;

    cin >> n;
    for(int i=1; i<=n; ++i){
        for(int j=1; j<=n; ++j){
            cin >> map[i][j];
            if(map[i][j]==9){
                simba.x = i;
                simba.y = j;
                map[i][j] = 0;
            }
        }
    }

    Q.push(State(simba.x, simba.y, 0)); //distance = 0
    simba.s = 2;
    simba.e = 0;
    
    while(!Q.empty()){
        State tmp = Q.top();
        Q.pop();
        int x=tmp.x;
        int y=tmp.y;
        int d=tmp.dist;
        if(map[x][y]!=0 && map[x][y]<simba.s){ //토끼가 존재하고 심바보다 작을 경우
            simba.x = x;
            simba.y = y;
            simba.e++;
            if(simba.e==simba.s) simba.sizeUp(); //???
            map[x][y] = 0;

            //초기화
            for(int i=1; i<=n; ++i){
                for(int j=1; j<=n; ++j){
                    ch[i][j] = 0;
                }
            }
            while(!Q.empty()) Q.pop();
            res = tmp.dist;
        }
        for(int i=0; i<4; ++i){
            int xx=x+dx[i];
            int yy=y+dy[i];
            if(xx>=1 && xx <=n && yy>=1 && yy<=n && map[xx][yy]<=simba.s && ch[xx][yy]==0){ //심바가 지나칠 수 있는 조건
                Q.push(State(xx, yy, d+1));
                ch[xx][yy]=1;
            }
        }
    }
    cout << res << endl;
    return 0;
}
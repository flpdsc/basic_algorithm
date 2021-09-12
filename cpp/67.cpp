//최소비용(DFS : 인접행렬)

#include <iostream>
using namespace std;

int n, map[21][21], ch[21], mini=2147000000;

void DFS(int v, int c)
{
    if(v==n){
        if(mini>c) mini = c;
    }
    else{
        for(int i=1; i<=n; ++i){
            if(map[v][i]!=0&&ch[i]==0){
                ch[i] = 1;
                DFS(i, c+map[v][i]);
                ch[i] = 0;
            }
        }
    }
}

int main()
{
    freopen("../data/67_input.txt", "rt", stdin);
    int m, a, b, c;
    cin >> n >> m;
    for(int i=1; i<=m; ++i){
        cin >> a >> b >> c;
        map[a][b] = c;
    }
    ch[1] = 1;
    DFS(1, 0);
    cout << mini << endl;
    return 0;
}
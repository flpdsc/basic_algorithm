//경로 탐색(DFS)
#include <iostream>
using namespace std;
int n, map[21][21], chk[21], cnt=0;
void DFS(int v)
{
    if(v==n) cnt++;
    else{
        for(int i=1; i<=n; ++i){
            if(map[v][i]==1&&chk[i]==0){
                chk[i] = 1;
                DFS(i);
                chk[i] = 0;
            }
        }
    }
}
int main()
{
    freopen("../data/64_input.txt", "rt", stdin);
    int m, a, b;
    cin >> n >> m;
    for(int i=1; i<=m; ++i){
        cin >> a >> b;
        map[a][b] = 1;
    }
    chk[1] = 1;
    DFS(1);
    cout << cnt << endl;
    return 0;
}
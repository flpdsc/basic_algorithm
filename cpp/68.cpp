//최소비용(DFS : 가중치 방향그래프 인접리스트)
#include <iostream>
#include <vector>
using namespace std;
int n, ch[21], cost=2147000000;
vector<pair<int, int> > map[21];
void DFS(int v, int s)
{
    if(v==n){
        if(s<cost) cost = s;
    }
    else{
        for(int i=0; i<map[v].size(); ++i){
            if(ch[map[v][i].first]==0){
                ch[map[v][i].first] = 1;
                DFS(map[v][i].first, s+map[v][i].second);
                ch[map[v][i].first] = 0;
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
        map[a].push_back(make_pair(b, c));
    }
    ch[1] = 1;
    DFS(1, 0);
    cout << cost << endl;
    return 0;
}
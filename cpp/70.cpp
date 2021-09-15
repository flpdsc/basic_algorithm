//그래프 최단거리(BFS)
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int ch[21], dst[21];
int main()
{
    freopen("../data/70_input.txt", "rt", stdin);
    int i, n, m, a, b, x;

    cin >> n >> m;
    vector<int> map[n+1];
    queue<int> Q;
    for(i=1; i<=m; ++i){
        cin >> a >> b;
        map[a].push_back(b); 
    }
    Q.push(1);
    ch[1] = 1;
    while(!Q.empty()){
        x = Q.front();
        Q.pop();
        for(i=0; i<map[x].size(); ++i){
            if(ch[map[x][i]]==0){
                ch[map[x][i]] = 1;
                Q.push(map[x][i]);
                dst[map[x][i]] = dst[x]+1;
            }
        }
    }
    for(i=2; i<=n; ++i) cout << i << " : " << dst[i] << endl;
    return 0;
}
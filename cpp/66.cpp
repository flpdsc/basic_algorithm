//경로 탐색(DFS : 인접리스트 방법)

#include <iostream>
#include <vector>
using namespace std;

int n, ch[21], cnt=0;
vector<int> map[21];

void DFS(int v)
{
    if(v==n) cnt++;
    else{
        for(int i=0; i<map[v].size(); ++i){
            if(ch[map[v][i]]==0){
                ch[map[v][i]] = 1;
                DFS(map[v][i]);
                ch[map[v][i]] = 0;
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
        map[a].push_back(b);
    }
    ch[1] = 1;
    DFS(1);
    cout << cnt << endl;
    return 0;
}
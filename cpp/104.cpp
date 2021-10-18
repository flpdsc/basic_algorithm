//위상정렬(그래프 정렬)
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    freopen("../data/104_input.txt", "rt", stdin);
    int n, m, a, b;
    cin >> n >> m;
    vector<vector<int> > graph(n+1, vector<int>(n+1));
    vector<int> degree(n+1); //진입차수
    queue<int> Q;
    for(int i=0; i<m; ++i){
        cin >> a >> b;
        graph[a][b] = 1;
        degree[b]++;
    }
    for(int i=1; i<=n; ++i){
        if(degree[i]==0) Q.push(i); //선행작업 없는 작업 queue에 넣어줌
    }
    while(!Q.empty()){
        int now = Q.front();
        Q.pop();
        cout << now << " ";
        for(int i=1; i<=n; ++i){
            if(graph[now][i]==1){
                degree[i]--;
                if(degree[i]==0) Q.push(i);
            }
        }
    }
    return 0;
}
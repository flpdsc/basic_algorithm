//다익스트라 알고리즘
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Edge{
    int vex, dst;
    Edge(int a, int b){
        vex = a;
        dst = b;
    }
    bool operator<(const Edge &edge)const{
        return dst>edge.dst;
    }
};
int main()
{
    freopen("../data/80_input.txt", "rt", stdin);
    int i, n, m, a, b, c;
    vector<pair<int, int> > graph[21]; //인접 리스트
    priority_queue<Edge> pQ; //최소 거리를 빠르게 탐색하기 위하여
    cin >> n >> m;
    vector<int> dist(n+1, 2147000000); //최소 거리를 담을 dist

    for(i=0; i<m; ++i){
        cin >> a >> b >> c;
        graph[a].push_back(make_pair(b, c));
    }

    pQ.push(Edge(1, 0)); 
    dist[1] = 0;

    while(!pQ.empty()){
        int now = pQ.top().vex;
        int cost = pQ.top().dst;
        pQ.pop();

        if(cost>dist[now]) continue;
        
        for(i=0; i<graph[now].size(); ++i){
            int next = graph[now][i].first;
            int nextDst = cost + graph[now][i].second;
            if(dist[next]>nextDst){ //지금 확인하고 있는 거리가 최소이면
                dist[next] = nextDst;
                pQ.push(Edge(next, nextDst));
            } 
        }
    }
    
    for(i=2; i<=n; ++i){
        cout << i << " : ";
        if(dist[i]==2147000000) cout << "Impossible" << endl;
        else cout << dist[i] << endl;
    }
    return 0;
}
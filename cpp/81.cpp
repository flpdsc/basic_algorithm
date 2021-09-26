//벨만-포드 알고리즘
#include <iostream>
#include <vector>
using namespace std;

int dist[101];

struct Edge{
    int source, destination, cost;
    Edge(int a, int b, int c){
        source = a;
        destination = b;
        cost = c;
    }
};

int main()
{
    freopen("../data/81_input.txt", "rt", stdin);
    vector<Edge> Ed;
    int i, j, n, m, a, b, c, s, e;
    cin >> n >> m;
    for(i=1; i<=n; ++i) dist[i] = 2147000000;
    for(i=1; i<=m; ++i){
        cin >> a >> b >> c;
        Ed.push_back(Edge(a, b, c));
    }
    cin >> s >> e;
    dist[s] = 0;
    for(i=1; i<n; ++i){ //간선갯수
        for(j=0; j<Ed.size(); ++j){
            int u = Ed[j].source;
            int v = Ed[j].destination;
            int w = Ed[j].cost;
            if(dist[u]!=2147000000 && dist[u]+w<dist[v]) dist[v] = dist[u]+w;
        }
    }
    for(j=0; j<Ed.size(); ++j){ //n번째 간선 (음의 cycle 존재)
        int u = Ed[j].source;
        int v = Ed[j].destination;
        int w = Ed[j].cost;
        if(dist[u]!=2147000000 && dist[u]+w<dist[v]){
            cout << -1 << endl;
            return -1;
        }
    }
    cout << dist[e] << endl;
    return 0;
}
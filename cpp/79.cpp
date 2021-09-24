//원더랜드(Prim MST 알고리즘 : priority_queue 활용)
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int ch[26];

struct Edge{
    int e, cst;
    Edge(int a, int b){
        e = a;
        cst = b;
    }
    bool operator<(const Edge &edge)const{
        return cst>edge.cst; //최소힙
    }
};

int main()
{
    freopen("../data/78_input.txt", "rt", stdin);
    int i, v, e, a, b, c, res=0;
    priority_queue<Edge> Pq;
    vector<pair<int, int> > map[26];
    cin >> v >> e;
    for(i=0; i<e; ++i){
        cin >> a >> b >> c;
        //무방향 가중치 인접리스트
        map[a].push_back(make_pair(b, c));
        map[b].push_back(make_pair(a, c));
    }
    Pq.push(Edge(1, 0));
    while(!Pq.empty()){
        Edge tmp=Pq.top();
        Pq.pop();
        int v = tmp.e;
        int cost = tmp.cst;
        if(ch[v]==0){
            res += cost;
            ch[v] = 1;
            for(i=0; i<map[v].size(); ++i) Pq.push(Edge(map[v][i].first, map[v][i].second));
        }
    }
    cout << res << endl;
    return 0;
}
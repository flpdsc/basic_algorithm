//원더랜드(Kruskal MST 알고리즘 : Union&Find 활용)
#include <iostream>
#include <vector>
using namespace std;
int unf[26];

struct Edge{
    int v1, v2, cst;
    Edge(int a, int b, int c){
        v1 = a;
        v2 = b;
        cst = c;
    }
    bool operator<(const Edge &edge)const{
        return cst<edge.cst;
    }
};

int Find(int v)
{
    if(v==unf[v]) return v;
    else return unf[v]=Find(unf[v]);
}

void Union(int a, int b)
{
    a = Find(a);
    b = Find(b);
    if(a!=b) unf[a] = b;
}

int main()
{
    freopen("../data/78_input.txt", "rt", stdin);
    int i, v, e, a, b, c, res=0;
    vector<Edge> Ed;
    cin >> v >> e;
    for(i=1; i<=v; ++i) unf[i] = i; 
    for(i=0; i<e; ++i){
        cin >> a >> b >> c;
        Ed.push_back(Edge(a, b, c));
    }
    sort(Ed.begin(), Ed.end()); //가중치 오름차순
    for(i=0; i<e; ++i){
        int fa = Find(Ed[i].v1);
        int fb = Find(Ed[i].v2);
        if(fa!=fb){
            res +=Ed[i].cst;
            Union(Ed[i].v1, Ed[i].v2);
        }
    }
    cout << res << endl;
    return 0;
}
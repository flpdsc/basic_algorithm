// /친구인가? (Union&Find 자료구조)
#include <iostream>
using namespace std;

int unf[1001];

int Find(int v)
{
    if(v==unf[v]) return v;
    else return unf[v] = Find(unf[v]); //경로압축
}

void Union(int a, int b)
{
    a = Find(a);
    b = Find(b);
    if(a!=b) unf[a] = b;
}

int main()
{
    freopen("../data/77_input.txt", "rt", stdin);
    int i, n, m, a, b;
    cin >> n >> m;
    for(i=1; i<=n; ++i) unf[i] = i; //집합번호(root 번호) 초기화
    for(i=0; i<m; ++i){
        cin >> a >> b;
        Union(a, b);
    }
    cin >> a >> b;
    a = Find(a);
    b = Find(b);
    if(a==b) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
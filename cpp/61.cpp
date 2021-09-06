//특정 수 만들기(DFS)
#include <iostream>
using namespace std;
int n, m, a[11], cnt=0;
void DFS(int L, int x)
{

    if(L==n+1){
        if(x==m) cnt++;
        return;
    }
    else{
        DFS(L+1, x+a[L]);
        DFS(L+1, x-a[L]);
        DFS(L+1, x);
    }
}

int main()
{
    cin >> n >> m;
    for(int i=1; i<=n; ++i) cin >> a[i];
    DFS(1, 0);
    if(cnt!=0) cout << cnt << endl;
    else cout << -1 << endl;
    return 0;
}
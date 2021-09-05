//합이 같은 부분집합(DFS)
#include <iostream>
#include <vector>
using namespace std;

int n, a[11], b[11], total=0;
bool flag=false;

void DFS(int L)
{
    int sum=0;
    if(flag) return;
    if(L==n+1){
        for(int i=1; i<=n; ++i){
            sum += b[i];
        }
        cout << sum << endl;
        cout << total-sum << endl;
        if(sum==total-sum) flag=true;
    }
    else{
        b[L] = a[L];
        DFS(L+1);
        b[L] = 0;
        DFS(L+1);
    }
}

int main()
{
    cin >> n;
    for(int i=1; i<=n; ++i){
        cin >> a[i];
        total += a[i];
    }
    DFS(0);
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
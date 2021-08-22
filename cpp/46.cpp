//멀티태스킹
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, k, pos=0, cnt=0, total=0;
    cin >> n;
    vector<int> a(n+1);
    for(int i=1; i<=n; ++i){
        cin >> a[i];
        total += a[i];
    }
    cin >> k;
    if(k>=total){
        cout << -1 << endl;
        return 0;
    } 
    while(1){
        pos++;
        if(pos>n) pos = 1;
        if(a[pos]!=0){
            a[pos++]--;
            cnt++;
        }
        else{
            continue;
        }
        if(cnt==k) break;
    }
    while(1){
        pos++;
        if(pos>n) pos = 1;
        if(a[pos]!=0) break;
    }
    cout << pos << endl;
    return 0;
}
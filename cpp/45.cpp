//공주 구하기
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, k, pos=0, cnt=0, chk=0, i;
    cin >> n >> k;
    vector<int> a(n+1);
    while(1){
        pos++;
        if(pos>n) pos=1;
        if(a[pos]==0){
            cnt++;
            if(cnt==k){
                a[pos] = 1;
                cnt=0;
                chk++;
            }
        }
        if(chk==n-1) break;
    }
    for(i=1; i<=n; ++i){
        if(a[i]==0) break;
    }
    cout << i << endl;
    return 0;
}
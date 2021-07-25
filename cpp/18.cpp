//층간소음
#include <iostream>
using namespace std;
int a[100];
int main()
{
    int n, m, sec=0, cnt=0, flag=0, i;
    cin >> n >> m;

    for(i=0; i<n; ++i){
        cin >> a[i];
    }

    for(i=0; i<n; ++i){
        if(a[i]>m) {
            cnt++;
            flag = 1;
        }
        else{
            if(sec < cnt) sec = cnt;
            cnt = 0;
        }
    }
    if(flag == 0) cout << -1 << endl;
    else cout << sec << endl;

    return 0;
}
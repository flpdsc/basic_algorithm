//선생님 퀴즈
#include <iostream>
using namespace std;
int main()
{
    int i, j, sum=0, n, q, a, res[10];
    cin >> n;

    for(i=0; i<n; ++i){
        cin >> q >> a;
        for(j=1; j<=q; ++j){
            sum += j;
        }
        if(a == sum) res[i] = 1;
        else res[i] = 0;
        sum = 0;
    }

    for(i=0; i<n; ++i){
        if(res[i] == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
//블록의 최댓값
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i, j, n, sum=0;
    cin >> n;
    vector<vector<int> > a(n+1, vector<int>(n+1, 0));
    for(i=1; i<=n; ++i) cin >> a[0][i];
    for(i=n; i>=1; --i) cin >> a[i][0];

    for(i=1; i<=n; ++i){
        for(j=1; j<=n; ++j){
            if(a[i][0]>a[0][j]) a[i][j] = a[0][j];
            else a[i][j] = a[i][0];
            sum += a[i][j];
        }
    }
    // for(i=0; i<=n; ++i){
    //     for(j=0; j<=n; ++j){
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    cout << sum << endl;
    return 0;
}
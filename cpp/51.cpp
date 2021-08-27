//영지(territory) 선택
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    freopen("../data/50_input.txt", "rt", stdin);    

    int h, w, n, m, i, j, tmp, max=-2147000000;
    cin >> h >> w;
    vector<vector<int> > a(h+1, vector<int>(w+1, 0));
    for(i=1; i<=h; ++i){
        for(j=1; j<=w; ++j){
            cin >> a[i][j];
            a[i][j] += a[i-1][j] + a[i][j-1] - a[i-1][j-1];
        }
    }
    cin >> n >> m;
    for(i=n; i<=h; ++i){
        for(j=m; j<=w; ++j){
            tmp = a[i][j] - a[i-n][j] - a[i][j-m] + a[i-n][j-m];
            if(tmp>max) max = tmp;
        }
    }
    cout << max << endl;
    return 0;
}
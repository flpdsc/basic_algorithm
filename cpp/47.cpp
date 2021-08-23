//봉우리
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    freopen("../data/47_input.txt", "rt", stdin);
    int n, i, j, cnt=0;
    cin >> n;
    vector<vector<int> > ground(n+2, vector<int>(n+2, 0));
    for(i=1; i<=n; ++i){
        for(j=1; j<=n; ++j){
            cin >> ground[i][j];
        }
    }
    for(i=1; i<=n; ++i){
        for(j=1; j<=n; ++j){
            if(ground[i-1][j]<ground[i][j]&&ground[i+1][j]<ground[i][j]&&ground[i][j-1]<ground[i][j]&&ground[i][j+1]<ground[i][j]) cnt++;   
        }
    }
    
    cout << cnt << endl;
    return 0;
}
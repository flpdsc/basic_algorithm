//동전교환
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    freopen("../data/100_input.txt", "rt", stdin);
    int n, m;
    cin >> n;
    vector<int> coin(n);
    for(int i=0; i<n; ++i) cin >> coin[i];
    cin >> m;
    vector<int> dy(m+1, 500);
    dy[0] = 0;
    for(int i=0; i<n; ++i){
        for(int j=coin[i]; j<=m; ++j){
            dy[j] = min(dy[j], dy[j-coin[i]]+1);
        }
    }
    cout << dy[m] << endl;
    return 0;
}
//가방문제(냅색 알고리즘)
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    freopen("../data/99_input.txt", "rt", stdin);
    int n, m, w, v; //보석종류(<=30), 가방한계값(<=1000)
    cin >> n >> m;
    vector<int> dy(m+1);
    for(int i=0; i<n; ++i){
        cin >> w >> v;
        for(int j=w; j<=m; ++j){
            dy[j] = max(dy[j], dy[j-w]+v);
        }
    }
    cout << dy[m] << endl;
    return 0;
}
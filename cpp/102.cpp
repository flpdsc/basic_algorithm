//플로이드 워샬 알고리즘
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    freopen("../data/102_input.txt", "rt", stdin);
    int n, m, a, b, c, i, j, k;
    cin >> n >> m;
    vector<vector<int> > dy(n+1, vector<int>(n+1, 2000));
    for(i=1; i<=n; ++i) dy[i][i] = 0;
    for(i=1; i<=m; ++i){
        cin >> a >> b >> c;
        dy[a][b] = c;
    }

    //Floyd-Warshall min(i->j, i->k->j)
    for(k=1; k<=n; ++k){
        for(i=1; i<=n; ++i){
            for(j=1; j<=n; ++j){
                dy[i][j] = min(dy[i][j], dy[i][k]+dy[k][j]);
            }
        }
    }

    for(i=1; i<=n; ++i){
        for(j=1; j<=n; ++j){
            if(dy[i][j]==2000) cout << "M ";
            else cout << dy[i][j] << " ";
        }
        cout << endl;
    }    
    return 0;
}
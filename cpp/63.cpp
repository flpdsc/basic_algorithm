//인접행렬(가중치 방향그래프)
#include <iostream>
using namespace std;

int map[21][21];

int main()
{
    freopen("../data/63_input.txt", "rt", stdin);    
    
    int i, j, n, m, a, b, c;
    cin >> n >> m;
    for(i=1; i<=m; ++i){
        cin >> a >> b >> c;
        map[a][b] = c;
    }
    for(i=1; i<=n; ++i){
        for(j=1; j<=n; ++j){
            cout << map[i][j] << " ";
        }
        puts("");
    }
    return 0;
}
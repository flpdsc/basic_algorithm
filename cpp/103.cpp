//회장뽑기(플로이드-워샬 응용)
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    freopen("../data/103_input.txt", "rt", stdin);
    int n, a, b, i, j, k, score=100, cnt=0;
    cin >> n;
    vector<vector<int> > dy(n+1, vector<int>(n+1, 100));
    vector<int> res(n+1);
    for(i=1; i<=n; ++i) dy[i][i] = 0;

    while(true){
        cin >> a >> b;
        if(a==-1 && b==-1) break;
        dy[a][b] = 1;
        dy[b][a] = 1;
    }

    for(k=1; k<=n; ++k){
        for(i=1; i<=n; ++i){
            for(j=1; j<=n; ++j){
                dy[i][j] = min(dy[i][j], dy[i][k]+dy[k][j]);
            }
        }
    }

    for(i=1; i<=n; ++i){
        for(j=1; j<=n; ++j){
            res[i] = max(res[i], dy[i][j]); //각 회원의 점수
        }
        score = min(score, res[i]); //회장후보 점수
    }
    for(i=1; i<=n; ++i){
        if(res[i]==score) cnt++; //회장후보 수
    }
    cout << score << " " << cnt << endl;

    for(i=1; i<=n; ++i){
        if(res[i]==score) cout << i << " "; //회장후보가 되는 회원
    }
    cout << endl;
    
    return 0;
}
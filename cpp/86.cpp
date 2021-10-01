//피자 배달 거리(DFS활용)
#include <iostream>
#include <vector>
using namespace std;

int m, res=2147000000, ch[12], dst, sum;
vector<pair<int, int> > hs, sh;

void DFS(int L, int s)
{
    if(L==m){
        sum=0;
        for(int i=0; i<hs.size(); ++i){
            int x1 = hs[i].first;
            int y1 = hs[i].second;
            dst=2147000000;
            for(int j=0; j<m; ++j){
                int x2 = sh[ch[j]].first;
                int y2 = sh[ch[j]].second;
                dst = min(dst, abs(x1-x2)+abs(y1-y2));
            }
            sum += dst;
        }
        if(res>sum) res = sum;
    }
    else{
        for(int i=s; i<sh.size(); ++i){
            ch[L] = i;
            DFS(L+1, i+1);
        }
    }
}

int main()
{
    freopen("../data/86_input.txt", "rt", stdin);
    int n, a;
    cin >> n >> m;
    for(int i=1; i<=n; ++i){
        for(int j=1; j<=n; ++j){
            cin >> a;
            if(a==1) hs.push_back(make_pair(i, j));
            else if(a==2) sh.push_back(make_pair(i, j));
        }
    }
    DFS(0, 0);
    cout << res << endl;
    return 0;
}
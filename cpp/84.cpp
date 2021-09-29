//휴가(DFS활용)
#include <iostream>
#include <vector>
using namespace std;

int n, res=-2147000000;
vector<int> T, P;

void DFS(int L, int sum)
{
    if(L==n+1){
        if(sum>res) res = sum;
    }
    else{
        if(L+T[L]<=n+1) DFS(L+T[L], sum+P[L]); //상담수행o
        DFS(L+1, sum);  //상담수행x
    }
}

int main()
{
    freopen("../data/84_input.txt", "rt", stdin);
    ios_base::sync_with_stdio(false); //입출력 속도 향상
    int a, b;
    cin >> n;
    T.push_back(0);
    P.push_back(0);
    for(int i=0; i<n; ++i){
        cin >> a >> b;
        T.push_back(a);
        P.push_back(b);
    }
    DFS(1, 0);
    cout << res << endl;
    return 0;
}
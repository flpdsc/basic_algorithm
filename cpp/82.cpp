//순열구하기(DFS : Depth First Search)
#include <iostream>
using namespace std;

int n, r, cnt=0, input[16], output[16], chk[16];

void DFS(int L)
{
    if(L==r){
        for(int i=0; i<L; ++i) cout << output[i] << " ";
        puts("");
        cnt++;
    }
    else{
        for(int i=1; i<=n; ++i){
            if(chk[i]==0){
                output[L] = input[i];
                chk[i] = 1;
                DFS(L+1);
                chk[i] = 0;
            }
        }
    }
}

int main()
{
    freopen("../data/82_input.txt", "rt", stdin);
    cin >> n >> r;
    for(int i=1; i<=n; ++i) cin >> input[i];
    DFS(0);
    cout << cnt << endl;
    return 0;
}
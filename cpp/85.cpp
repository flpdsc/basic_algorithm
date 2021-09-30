//수식만들기(DFS활용)
#include <iostream>
using namespace std;

int a[10], op[4], n, maxi=-2147000000, mini=2147000000;

void DFS(int L, int res)
{
    if(L==n){
        if(res>maxi) maxi = res;
        if(res<mini) mini = res;
    }
    else{
        if(op[0]>0){
            op[0]--;
            DFS(L+1, res+a[L]);
            op[0]++;
        }
        if(op[1]>0){
            op[1]--;
            DFS(L+1, res-a[L]);
            op[1]++;
        }
        if(op[2]>0){
            op[2]--;
            DFS(L+1, res*a[L]);
            op[2]++;
        }
        if(op[3]>0){
            op[3]--;
            DFS(L+1, res/a[L]);
            op[3]++;
        }
    }
}
int main()
{
    freopen("../data/85_input.txt", "rt", stdin);
    int i;
    cin >> n;
    for(i=0; i<n; i++) cin >> a[i];
    for(i=0; i<4; i++) cin >> op[i];
    DFS(1, a[0]);
    cout << maxi << endl << mini << endl;   
    return 0;
}
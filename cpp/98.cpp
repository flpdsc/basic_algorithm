//알리바바와 40인의 도둑(Top-Down)
#include <iostream>
#include <algorithm>
using namespace std;
int arr[20][20], dy[20][20];

int DFS(int x, int y)
{
    if(dy[x][y]>0) return dy[x][y];
    if(x==0 && y==0) return arr[0][0];
    else{
        if(y==0) return dy[x][y] = DFS(x-1, y)+arr[x][y];
        else if(x==0) return dy[x][y] = DFS(x, y-1)+arr[x][y];
        else return dy[x][y] = min(DFS(x-1, y), DFS(x, y-1))+arr[x][y];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    freopen("../data/97_input.txt", "rt", stdin);
    int n, i, j;
    cin >> n;
    for(i=0; i<n; ++i){
        for(j=0; j<n; ++j){
            cin >> arr[i][j];
        }
    }
    cout << DFS(n-1, n-1) << endl;
    return 0;
}
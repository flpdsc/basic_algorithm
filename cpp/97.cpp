//알리바바와 40인의 도둑(Bottom-Up)
#include <iostream>
#include <algorithm>
using namespace std;
int arr[20][20], dy[20][20];
int main()
{
    ios_base::sync_with_stdio(false);
    freopen("../data/97_input.txt", "rt", stdin);
    int n, i, j;
    cin >> n;
    for(i=0; i<n; ++i){
        for(j=0; j<n; ++j) cin >> arr[i][j];
    }
    dy[0][0] = arr[0][0];
    for(i=1; i<n; ++i){
        dy[0][i] = dy[0][i-1]+arr[0][i];
        dy[i][0] = dy[i-1][0]+arr[i][0];
    }
    for(i=1; i<n; ++i){
        for(j=1; j<n; ++j){
            dy[i][j] = min(dy[i-1][j], dy[i][j-1])+arr[i][j];
        }
    }
    cout << dy[n-1][n-1] << endl;
    return 0;
}
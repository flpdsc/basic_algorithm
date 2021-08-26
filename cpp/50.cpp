//영지(territory) 선택
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    freopen("../data/50_input.txt", "rt", stdin);    

    int i, j, k, l, h, w, n, m, sum, max=-2147000000;
    cin >> h >> w;
    vector<vector<int> > a(w, vector<int>(h, 0));
    for(i=0; i<h; ++i){
        for(j=0; j<w; ++j){
            cin >> a[i][j];
        }
    }
    cin >> n >> m;
    for(i=0; i<h-n+1; ++i){
        for(j=0; j<w-m+1; ++j){
            sum = 0;
            for(k=i; k<i+n; ++k){
                for(l=j; l<j+m; ++l){
                    sum += a[k][l];
                }
            }
            if(sum>max) max = sum;
        }
    }
    cout << max << endl;
    return 0;
}
//두 배열 합치기
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i, j, n, m, tmp, pos;
    cin >> n;
    vector<int> a(n);
    for(i=0; i<n; ++i) cin >> a[i];
    cin >> m;
    vector<int> b(n+m);
    for(i=0; i<m; ++i) cin >> b[i];

    for(i=0; i<n; ++i){
        tmp = a[i];
        pos = m+i+1;
        for(j=pos; j>=0; --j){
            if(b[j]>tmp){
                b[j+1] = b[j];
                b[j] = tmp;
            } 
        }
    }

    for(i=0; i<n+m; ++i) cout << b[i] << " ";
    cout << endl;
    return 0;
}
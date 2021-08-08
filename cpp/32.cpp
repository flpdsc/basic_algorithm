//선택정렬
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i, j, n, idx, tmp;
    cin >> n;
    vector<int> a(n);
    for(i=0; i<n; ++i) cin >> a[i];
    for(i=0; i<=n; ++i){
        idx = i;
        for(j=i+1; j<n; ++j) if(a[idx]>a[j]) idx = j;
        tmp = a[i];
        a[i] = a[idx];
        a[idx] = tmp;
    }
    for(i=0; i<n; ++i) cout << a[i] << " ";
    cout << endl;
    return 0;
}
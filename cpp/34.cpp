//버블정렬
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i, j, n, tmp;
    cin >> n;
    vector<int> a(n);
    for(i=0; i<n; ++i){
        cin >> a[i];
    }
    for(i=0; i<n-1; ++i){
        for(j=0; j<n-i-1; ++j){
            if(a[j]>a[j+1]){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
    for(i=0; i<n; ++i) cout << a[i] << " ";
    cout << endl;
    return 0;
}
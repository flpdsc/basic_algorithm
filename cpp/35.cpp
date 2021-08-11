//Special Sort
#include <iostream>
using namespace std;
int main()
{
    int i, j, n, tmp, a[101];

    cin >> n;
    for(i=0; i<n; ++i){
        cin >> a[i];
    }
    for(i=0; i<n-1; ++i){
        for(j=0; j<n-i-1; ++j){
            if(a[j]>0 && a[j+1]<0){
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
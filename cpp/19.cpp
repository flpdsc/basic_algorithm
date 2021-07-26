//분노 유발자
#include <iostream>
using namespace std;
int main()
{
    int i, n, max, cnt=0;
    cin >> n;
    int h[n];

    for(i=0; i<n; ++i){
        cin >> h[i];
    }

    max = h[n-1];

    for(i=n-2; i>=0; --i){
        if(h[i] > max){
            max=h[i];
            cnt++;
        }
    }

    cout << cnt << endl;
    
    return 0;
}
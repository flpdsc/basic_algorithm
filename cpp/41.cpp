//연속된 자연수의 합
#include <iostream>
using namespace std;
int main()
{
    int i, n, m=1, cnt=0, tmp;
    cin >> n;
    tmp = n;
    n--;
    while(n>0){
        m++;
        n -= m;
        if(n%m==0){
            for(i=1; i<m; ++i){
                cout << i+(n/m) << " + ";
            }
            cout << i+(n/m) << " = " << tmp << endl;
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
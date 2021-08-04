//3의 개수는? (small)
#include <iostream>
using namespace std;
int main()
{
    int i, n, cnt=0, tmp, digit;
    cin >> n;
    for(i=1; i<=n; ++i){
        tmp = i;
        while(tmp>0){
            digit = tmp % 10;
            if(digit==3) cnt++;
            tmp /= 10;
        }
    }
    cout << cnt << endl;
    return 0;
}
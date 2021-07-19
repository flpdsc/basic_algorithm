//숫자의 총 개수 (큰 수)
#include <iostream>
using namespace std;
int main()
{
    int n, c=1, d=9, sum=0, res;
    cin >> n;
    while(sum+d<n){
        res += (c*d);
        sum += d;
        c++;
        d *= 10;
    }
    res += (n-sum)*c;
    cout << res << endl;
    return 0;
}
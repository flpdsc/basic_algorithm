// 진약수의 합

#include <iostream>
using namespace std;
int main()
{
    int n, i, sum=1;

    cin >> n;
    cout << "1";
    for (i=2; i<n; i++){
        if(n % i == 0) {
            cout << "+" << i;
            sum += i;
        }
    }
    cout << "=" << sum << endl;
    return 0;
}
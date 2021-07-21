//뒤집은 소수
#include <iostream>
using namespace std;

int reverse(int x)
{
    int res=0, tmp;

    while(x > 0){
        tmp = x % 10;
        res = res * 10 + tmp;
        x /= 10;
    }

    return res;
}

bool isPrime(int x)
{
    for(int i=2; i<x; ++i){
        if(x%i == 0) return false;
    }
    
    return true;
}

int main()
{
    int n, num, res;

    cin >> n;

    for(int i=1; i<=n; ++i){
        cin >> num;
        res = reverse(num);
        if (isPrime(res)) cout << res << " ";
    } 
    cout << endl;

    return 0;
}
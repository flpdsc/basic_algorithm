// 자연수의 합

#include <iostream>
using namespace std;
int main()
{
    int a, b, i, sum=0;
    cin >> a >> b;

    for(i=a; i<b; i++){
        cout << i << "+";
        sum += i;
    }
    cout << i << "=" << sum+i << endl;
}
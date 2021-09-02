//재귀함수 이진수 출력
#include <iostream>
using namespace std;

void recur(int x)
{
    if(x==0) return;
    else{
        recur(x/2);
        cout << x%2;
    }
}

int main()
{
    int n;
    cin >> n;
    recur(n);
    cout << endl;
    return 0;
}
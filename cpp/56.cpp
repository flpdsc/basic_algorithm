//재귀함수 분석
#include <iostream>
using namespace std;
void recur(int x)
{
    if(x==0) return;
    else{
        recur(x-1);
        cout << x << " ";
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
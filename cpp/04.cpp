// 나이 차이

#include <iostream>
using namespace std;

int main()
{
    freopen("../data/04_input.txt", "rt", stdin);
    int n, i, a, max=-2147000000, min=2147000000;
    cin >> n;
    for(i=1; i<=n; ++i){
        cin >> a;
        if(max < a) max=a;
        if(min > a) min=a;
    }
    cout << max - min << endl;
    return 0;
}
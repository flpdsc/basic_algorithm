//네트워크 선 자르기(Bottom-Up)
#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    int n, dy[46]={0,};
    cin >> n;
    dy[1] = 1;
    dy[2] = 2;
    for(int i=3; i<=n; ++i) dy[i] = dy[i-1]+dy[i-2];
    cout << dy[n] << endl;
    return 0;
}
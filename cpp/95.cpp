//최대 부분 증가수열(LIS : Longest Increasing Subsequence)
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    freopen("../data/95_input.txt", "rt", stdin);
    int n, res=0;
    cin >> n;
    vector<int> arr(n+1), dy(n+1);
    for(int i=1; i<=n; ++i) cin >> arr[i];
    dy[1] = 1;
    for(int i=2; i<=n; ++i){
        int max=0;
        for(int j=i-1; j>=1; --j){
            if(arr[i]>arr[j] && dy[j]>max) max=dy[j];
        }
        dy[i] = ++max;
        if(dy[i]>res) res = dy[i];
    }
    cout << res << endl;
    return 0;
}
//온도의 최대값
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int i, n, k, sum=0, max=-2147000000;
    
    cin >> n >> k;

    vector<int> t(n);

    for(i=0; i<n; ++i){
        cin >> t[i];
    }

    for(i=0; i<k; ++i){
        sum += t[i];
    }
    
    max = sum;
    
    for(i=k; i<n; ++i){
        sum += t[i] - t[i-k];
        if(sum > max) max = sum;
    }

    cout << max << endl;
    return 0;
}
//이분검색
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, m, i, lt=0, rt, mid, tmp;
    cin >> n >> m;
    vector<int> a;
    for(i=0; i<n; ++i) {
        cin >> tmp;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    rt = n-1;
    while(lt<=rt){
        mid = (lt+rt)/2;
        if(a[mid]==m){
            cout << mid+1 << endl;
            return 0;
        }
        else if(a[mid]>m) rt = mid-1;
        else lt = mid+1;
    }
    return 0;
}
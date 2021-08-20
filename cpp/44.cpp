//마굿간 정하기(이분검색 응용)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
vector<int> a;
int count(int dist){
    int cnt=1, pos=a[0];
    for(int i=1; i<n; ++i){
        if(a[i]-pos>=dist){
            cnt++;
            pos=a[i];
        }
    }
    return cnt;
}
int main()
{
    int c, tmp, lt=0, rt, mid, res;
    cin >> n >> c;
    for(int i=0; i<n; ++i){
        cin >> tmp;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    rt = a[n-1];
    while(lt<=rt){
        mid = (lt+rt)/2;
        if(count(mid)>=c){
            res = mid;
            lt = mid+1;
        }
        else rt = mid-1;
    }
    cout << res << endl;
    return 0;
}
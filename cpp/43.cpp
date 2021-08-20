//뮤직비디오(이분검색 응용)
#include <iostream>
#include <vector>
using namespace std;
int n;
vector<int> a;
int count(int s){
    int cnt=1, sum=0;
    for(int i=1; i<=n; ++i){
        if(sum+a[i]>s){
            cnt++;
            sum = a[i];
        }
        else sum += a[i];
    }
    return cnt;
}
int main()
{
    int m, tmp, lt=1, mid, rt=0, res, max=-2147000000;
    cin >> n >> m;
    for(int i=1; i<=n; ++i){
        cin >> tmp;
        rt += tmp;
        a.push_back(tmp);
        if(tmp>max) max = tmp;
    }
    while(lt<=rt){
        mid = (lt+rt)/2;
        if(mid>=max && count(mid)<=m){
            res = mid;
            rt = mid-1;
        } 
        else lt = mid+1;
    }
    cout << res << endl;
    return 0;
}

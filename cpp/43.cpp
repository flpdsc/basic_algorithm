//뮤직비디오(이분검색 응용)

#include <iostream>

using namespace std;
int n;

int count(int s, int a[]){
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
    int m, lt=1, mid, rt=0, res, max=-2147000000;
    cin >> n >> m;
    int *a = new int[n+1];
    for(int i=1; i<=n; ++i){
        cin >> a[i];
        rt += a[i];
        if(a[i]>max) max = a[i];
    }
    while(lt<=rt){
        mid = (lt+rt)/2;
        if(mid>=max && count(mid, a)<=m){
            res = mid;
            rt = mid-1;
        } 
        else lt = mid+1;
    }
    cout << res << endl;
    return 0;
}

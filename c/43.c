//뮤직비디오(이분검색 응용)
#include <stdio.h>
#include <stdlib.h>
int n, *a;
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
int main(void)
{
    int m, lt=1, rt=0, mid, res;
    scanf("%d %d", &n, &m);
    a = (int*)malloc(sizeof(int)*(n+1));
    for(int i=1; i<=n; ++i){
        scanf("%d", &a[i]);
        rt += a[i];
    }
    while(lt<=rt){
        mid = (lt+rt)/2;
        if(count(mid)<=m){
            res = mid;
            rt = mid-1;
        }
        else lt = mid+1;
    }
    printf("%d\n", res);
    free(a);
    return 0;
}
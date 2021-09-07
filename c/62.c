//병합정렬
#include <stdio.h>

int a[101], tmp[101];

void divide(int lt, int rt)
{
    if(lt<rt){
        int mid, a1, a2, t;
        mid = (lt+rt)/2;
        divide(lt, mid);
        divide(mid+1, rt);
        a1 = lt;
        a2 = mid+1;
        t = lt;
        while(a1<=mid&&a2<=rt){
            if(a[a1]<a[a2]) tmp[t++] = a[a1++];
            else tmp[t++] = a[a2++];
        }
        while(a1<=mid) tmp[t++] = a[a1++];
        while(a2<=rt) tmp[t++] = a[a2++];
        for(int i=lt; i<=rt; ++i) a[i] = tmp[i];
    }
}

int main(void)
{
    int n, i;
    scanf("%d", &n);
    for(i=1; i<=n; ++i) scanf("%d", &a[i]);
    divide(1, n);
    for(i=1; i<=n; ++i) printf("%d ", a[i]);
    puts("");
    return 0;
}
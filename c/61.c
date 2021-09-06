//특정 수 만들기(DFS)
#include <stdio.h>
int n, m, a[11], path[11], cnt=0;
void DFS(int L, int val)
{
    if(L==n+1){
        if(val==m){
            cnt++;
            for(int i=0; i<=n; ++i) printf("%d ", path[i]);
            puts("");
        }
        return;
    }
    else{
        path[L]=a[L];
        DFS(L+1, val+a[L]);
        path[L]=-a[L];
        DFS(L+1, val-a[L]);
        path[L]=0;
        DFS(L+1, val);
    }
}
int main(void)
{
    scanf("%d %d", &n, &m);
    for(int i=1; i<=n; ++i) scanf("%d", &a[i]);
    DFS(1, 0);
    if(cnt!=0) printf("%d\n", cnt);
    else printf("-1\n");
    return 0;
}
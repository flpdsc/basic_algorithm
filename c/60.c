//합이 같은 부분집합(DFS)
#include <stdio.h>

int n, a[11], total=0, flag=0;

void DFS(int L, int sum)
{
    if(sum>total/2 || flag==1) return;
    if(L==n+1){
        if(sum==total-sum) flag = 1;
    }
    else{
        DFS(L+1, sum+a[L]);
        DFS(L+1, sum);
    }
}

int main(void)
{
    scanf("%d", &n);
    for(int i=1; i<=n; ++i){
        scanf("%d", &a[i]);
        total += a[i];
    }
    DFS(1, 0);
    if(flag==1) printf("YES\n");
    else printf("NO\n");
    return 0;
}
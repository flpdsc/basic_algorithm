//휴가(DFS활용)
#include <stdio.h>

int n, T[8], P[101], res=-2147000000;

void DFS(int L, int sum)
{
    if(L==n+1){
        if(sum>res) res = sum;
    }
    else{
        if(L+T[L]<=n+1) DFS(L+T[L], sum+P[L]);
        DFS(L+1, sum);
    }
}

int main(void)
{
    freopen("../data/84_input.txt", "rt", stdin);
    scanf("%d", &n);
    for(int i=1; i<=n; ++i) scanf("%d %d", &T[i], &P[i]);
    DFS(1, 0);
    printf("%d\n", res);
    return 0;
}
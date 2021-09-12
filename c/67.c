//최소비용(DFS : 인접행렬)
#include <stdio.h>

int n, map[21][21], ch[21], cost=2147000000;

void DFS(int v, int s)
{
    if(v==n){
        if(cost>s) cost = s;
    }
    else{
        for(int i=1; i<=n; ++i){
            if(map[v][i]!=0&&ch[i]==0){
                ch[i] = 1;
                DFS(i, s+map[v][i]);
                ch[i] = 0;
            }
        }
    }
}

int main(void)
{
    freopen("../data/67_input.txt", "rt", stdin);
    int m, a, b, c;
    scanf("%d %d", &n, &m);
    for(int i=1; i<=m; ++i){
        scanf("%d %d %d", &a, &b, &c);
        map[a][b] = c;
    }
    ch[1] = 1;
    DFS(1, 0);
    printf("%d\n", cost);
    return 0;
}
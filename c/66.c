//경로 탐색(DFS : 인접리스트 방법)
#include <stdio.h>
#include <stdlib.h>
int n, ch[21], top[21], cnt=0, **map;

void push(int x, int y)
{
    map[x][++top[x]] = y;
}

void DFS(int v)
{
    if(v==n){
        cnt++;
    }
    else{
        for(int i=0; i<=top[v]; ++i){
            if(ch[map[v][i]]==0){
                ch[map[v][i]] = 1;
                DFS(map[v][i]);
                ch[map[v][i]] = 0;
            }
        }
    }
}
int main(void)
{
    freopen("../data/64_input.txt", "rt", stdin);
    int i, m, a, b;
    scanf("%d %d", &n, &m);
    map = (int**)calloc(n+1, sizeof(int*));
    for(int i=1; i<=n; ++i){
        map[i] = (int*)calloc(m, sizeof(int));
        map[i][0] = i;
    }
    for(i=1; i<=m; ++i){
        scanf("%d %d", &a, &b);
        push(a, b);
    }
    ch[1] = 1;
    DFS(1);
    printf("%d\n", cnt);
    for(i=0; i<n+1; ++i) free(map[i]);
    free(map);
    return 0;
}
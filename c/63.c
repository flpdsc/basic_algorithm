//인접행렬(가중치 방향그래프)
#include <stdio.h>

int map[21][21];

int main(void)
{
    freopen("../data/63_input.txt", "rt", stdin);    
    int i, j, n, m, a, b, c;
    scanf("%d %d", &n, &m);
    for(i=1; i<=m; ++i){
        scanf("%d %d %d", &a, &b, &c);
        map[a][b] = c;        
    }
    for(i=1; i<=n; ++i){
        for(j=1; j<=n; ++j) printf("%d ", map[i][j]);
        puts("");
    }
    return 0;
}
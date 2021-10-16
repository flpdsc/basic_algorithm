//플로이드 워샬 알고리즘
#include <stdio.h>
int dy[101][101];
int main(void)
{
    freopen("../data/102_input.txt", "rt", stdin);
    int n, m, a, b, c, i, j, k;
    scanf("%d %d", &n, &m);
    for(i=1; i<=n; ++i){
        for(j=1; j<=n; ++j){
            if(i!=j) dy[i][j] = 2000;
        }
    }
    for(i=1; i<=m; ++i){
        scanf("%d %d %d", &a, &b, &c);
        dy[a][b] = c;
    }

    //Floyd-Warshall min(i->j, i->k->j)
    for(k=1; k<=n; ++k){
        for(i=1; i<=n; ++i){
            for(j=1; j<=n; ++j){
                if(dy[i][j]>dy[i][k]+dy[k][j]) dy[i][j] = dy[i][k]+dy[k][j];
            }
        }
    }

    for(i=1; i<=n; ++i){
        for(j=1; j<=n; ++j){
            if(dy[i][j]==2000) printf("M ");
            else printf("%d ", dy[i][j]);
        }
        printf("\n");
    }

    return 0;
}
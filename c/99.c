//가방문제(냅색 알고리즘)
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    freopen("../data/99_input.txt", "rt", stdin);
    int n, m, w, v, *dy;
    scanf("%d %d", &n, &m);
    dy = (int*)calloc(m+1, sizeof(int));
    for(int i=0; i<n; ++i){
        scanf("%d %d", &w, &v);
        for(int j=w; j<=m; ++j){
            if(dy[j]<dy[j-w]+v) dy[j] = dy[j-w]+v;
        }
    }
    printf("%d\n", dy[m]);
    free(dy);
    return 0;
}

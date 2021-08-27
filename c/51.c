//영지(territory) 선택
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    freopen("../data/50_input.txt", "rt", stdin);    

    int **a, h, w, n, m, i, j, tmp, max=-2147000000;
    scanf("%d %d", &h, &w);

    a = (int**)calloc(h+1, sizeof(int*));
    for(i=0; i<=h; ++i){
        a[i] = (int*)calloc(w+1, sizeof(int));
    }

    for(i=1; i<=h; ++i){
        for(j=1; j<=w; ++j){
            scanf("%d", &a[i][j]);
            a[i][j] += a[i-1][j] + a[i][j-1] - a[i-1][j-1];
        }
    }
    scanf("%d %d", &n, &m);
    for(i=n; i<=h; ++i){
        for(j=m; j<=w; ++j){
            tmp = a[i][j] - a[i-n][j] - a[i][j-m] + a[i-n][j-m];
            if(tmp>max) max = tmp;
        }
    }
    printf("%d\n", max);
    free(a);
    return 0;
}
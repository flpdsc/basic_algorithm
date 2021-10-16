//최대점수 구하기(냅색 알고리즘)
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    freopen("../data/101_input.txt", "rt", stdin);
    int n, m, s, t, *dy;
    scanf("%d %d", &n, &m);
    dy = (int*)calloc(m+1, sizeof(int));
    for(int i=0; i<n; ++i){
        scanf("%d %d", &s, &t);
        for(int j=m; j>=t; --j){
            if(dy[j]<dy[j-t]+s) dy[j] = dy[j-t]+s;
        }
    }
    printf("%d\n", dy[m]);
    free(dy);
    return 0;
}
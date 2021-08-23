//봉우리
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    freopen("../data/47_input.txt", "rt", stdin);
    int i, j, n, **map, flag, cnt=0;
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    scanf("%d", &n);

    map = (int**)calloc(n+2, sizeof(int*));
    for(i=0; i<n+2; ++i){
        map[i] = (int*)calloc(n+2, sizeof(int));
    }

    for(i=1; i<=n; ++i){
        for(j=1; j<=n; ++j){
            scanf("%d", &map[i][j]);
        }
    }

    for(i=1; i<=n; ++i){
        for(j=1; j<=n; ++j){
            flag = 0;
            for(int k=0; k<4; ++k){
                if(map[i+dx[k]][j+dy[k]]>=map[i][j]){
                    flag = 1;
                    break;
                }
            }
            if(flag==0) cnt++;
        }
    }
    printf("%d\n", cnt);

    for(i=0; i<n+2; ++i) free(map[i]);
    free(map);
    return 0;
}
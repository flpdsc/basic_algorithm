//영지(territory) 선택
#include <stdio.h>
int a[5][50];
int main(void)
{
    freopen("../data/50_input.txt", "rt", stdin);    

    int i, j, k, l, h, w, n, m, sum, max=-2147000000;
    scanf("%d %d", &h, &w);
    for(i=0; i<h; ++i){
        for(j=0; j<w; ++j){
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d %d", &n, &m);
    for(i=0; i<h-n+1; ++i){
        for(j=0; j<w-m+1; ++j){
            sum = 0;
            for(k=i; k<i+n; ++k){
                for(l=j; l<j+m; ++l){
                    sum += a[k][l];
                }
            }
            if(sum>max) max = sum;
        }
    }
    printf("%d\n", max);
    return 0;
}
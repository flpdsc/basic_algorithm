//마라톤
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, n, *cap, rank;
    scanf("%d", &n);
    cap = (int*)malloc(sizeof(int)*(n+1));

    for(i=1; i<=n; ++i){
        scanf("%d", &cap[i]);
    }
    printf("1 ");
    for(i=2; i<=n; ++i){
        rank = 1;
        for(j=i-1; j>=1; --j){
            if(cap[i]<=cap[j]) rank++;
        }
        printf("%d ", rank);
    }
    printf("\n");
    free(cap);
    return 0;
}
//석차 구하기
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i, j, *score, *rank;
    scanf("%d", &n);
    score = (int*)malloc(sizeof(int)*n);
    rank = (int*)malloc(sizeof(int)*n);
    // memset(rank, 0, sizeof(int)*n);

    for(i=0; i<n; ++i){
        rank[i] = 1;
        scanf("%d", &score[i]);
    }

    for(i=0; i<n; ++i){
        for(j=0; j<n; ++j){
            if(score[i] > score[j]) rank[j]++;
        }
    }

    for(i=0; i<n; ++i) printf("%d ", rank[i]);
    printf("\n");
    free(score);
    free(rank);
    return 0;
}
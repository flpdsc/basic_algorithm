//3등의 성적
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i, j, n, *score, idx, tmp, cnt=1;
    scanf("%d", &n);
    score = (int*)malloc(sizeof(int)*n);
    for(i=0; i<n; ++i) scanf("%d", &score[i]);
    for(i=0; i<=n; ++i){
        idx = i;
        for(j=i+1; j<n; ++j){
            if(score[idx]<score[j]) idx = j;
        }
        tmp = score[i];
        score[i] = score[idx];
        score[idx] = tmp;
    }
    for(i=1; i<n; ++i){
        if(score[i-1]>score[i]) cnt++;
        if(cnt==3){
            printf("%d\n", score[i]);
            break;
        }
    }
    return 0;
}

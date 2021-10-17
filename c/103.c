//회장뽑기(플로이드-워샬 응용)
#include <stdio.h>

int dy[51][51], res[51];

int main(void)
{
    freopen("../data/103_input.txt", "rt", stdin);
    int n, a, b, i, j, k, score=100, cnt=0;
    scanf("%d", &n);
    for(i=1; i<=n; ++i){
        for(j=1; j<=n; ++j){
            if(i!=j) dy[i][j] = 100;
        }
    }

    while(1){
        scanf("%d %d", &a, &b);
        if(a==-1 && b==-1) break;
        dy[a][b] = 1;
        dy[b][a] = 1;
    }

    for(k=1; k<=n; ++k){
        for(i=1; i<=n; ++i){
            for(j=1; j<=n; ++j){
                if(dy[i][j]>dy[i][k]+dy[k][j]) dy[i][j] = dy[i][k]+dy[k][j];
            }
        }
    }

    for(i=1; i<=n; ++i){
        for(j=1; j<=n; ++j){
            if(res[i]<dy[i][j]) res[i] = dy[i][j]; //각 회원의 점수
        }
        if(score>res[i]) score = res[i]; //회장후보 점수
    }
    for(i=1; i<=n; ++i){
        if(res[i]==score) cnt++; //회장후보 수
    }
    printf("%d %d\n", score, cnt);

    for(i=1; i<=n; ++i){
        if(res[i]==score) printf("%d ", i); //회장후보가 되는 회원
    }
    printf("\n");
    
    return 0;
}
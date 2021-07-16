//모두의 약수
#include <stdio.h>

int cnt[50001];

int main(void)
{
    int n, i, j;
    scanf("%d", &n);

    for(i=1; i<=n; ++i){
        for(j=i; j<=n; j+=i){
            cnt[j]++;
        }
    }
    for(i=1; i<=n; ++i){
        printf("%d ", cnt[i]);
    }
    printf("\n");
    
    return 0;
}
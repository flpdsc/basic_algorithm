//공주 구하기
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n, k, *a, pos=0, cnt=0, bp=0;
    scanf("%d %d", &n, &k);
    a = (int*)calloc(n+1, sizeof(int));
    while(1){
        pos++;
        if(pos>n) pos = 1;
        if(a[pos]==0){
            cnt++;
            if(cnt==k){
                a[pos] = 1;
                cnt=0;
                bp++;
            }
        }
        if(bp==n-1) break;
    }
    for(int i=1;i<=n; ++i){
        if(a[i]==0){
            printf("%d\n", i);
            break;
        }
    }
    free(a);
    return 0;
}
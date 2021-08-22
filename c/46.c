//멀티태스킹
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n, k, *a, tot=0, pos=0, cnt=0;
    scanf("%d", &n);
    a = (int*)calloc(n+1, sizeof(int));
    for(int i=1; i<=n; ++i){
        scanf("%d", &a[i]);
        tot += a[i];
    }
    scanf("%d", &k);
    if(k>=tot){
        printf("-1\n");
        free(a);
        return 0;
    }
    while(1){
        pos++;
        if(pos>n) pos = 1;
        if(a[pos]==0) continue;
        a[pos]--;
        cnt++;
        if(cnt==k) break;
    }
    while(1){
        pos++;
        if(pos>n) pos = 1;
        if(a[pos]!=0) break;
    }
    printf("%d\n", pos);
    free(a);
    return 0;
}
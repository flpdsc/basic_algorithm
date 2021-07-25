//층간소음
#include <stdio.h>

int main(void)
{
    int n, m, a, i, cnt=0, max=-2147000000;
    scanf("%d %d", &n, &m);
    for(i=1; i<=n; ++i){
        scanf("%d", &a);
        if(a > m) cnt++;
        else cnt=0;
        if(cnt > max) max = cnt; 
    }
    if(max == 0) printf("-1\n");
    else printf("%d\n", max);
    return 0;
}
//Jolly Jumpers
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i, *ch, now, pre, pos;
    scanf("%d %d", &n, &pre);
    ch = (int*)calloc(n, sizeof(int));
    for(i=1; i<n; ++i){
        scanf("%d", &now);
        pos = abs(now - pre);
        if(pos>0 && pos<n && ch[pos]==0) ch[pos] = 1;
        else{
            free(ch);
            printf("NO\n");
            return 0;
        }
        pre = now;
    }
    free(ch);
    printf("YES\n");
    return 0;
}
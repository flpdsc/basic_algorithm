//돌다리 건너기(Bottom-Up)
#include <stdio.h>
int dy[47];
int main(void)
{
    int n;
    scanf("%d", &n);
    dy[1] = 1;
    dy[2] = 2;
    for(int i=3; i<=n+1; ++i) dy[i] = dy[i-1]+dy[i-2];
    printf("%d\n", dy[n+1]);
    return 0;
}
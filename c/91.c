//네트워크 선 자르기(Bottom-Up)
#include <stdio.h>
int main(void)
{
    int n, dy[50]={0,};
    scanf("%d", &n);
    dy[1] = 1;
    dy[2] = 2;
    for(int i=3; i<=n; ++i) dy[i] = dy[i-1]+dy[i-2];
    printf("%d\n", dy[n]);
    return 0;
}
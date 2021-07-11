// 나이 차이

#include <stdio.h>

int main(void)
{
    freopen("../data/04_input.txt", "rt", stdin);
    int n, a, i, max=-2147000000, min=2147000000;
    scanf("%d", &n);
    for (i=1; i<=n; ++i){
        scanf("%d", &a);
        if(a > max) max = a;
        if(a < min) min = a;
    }
    printf("%d\n", max - min);
    return 0;
}
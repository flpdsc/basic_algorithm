// 1부터 N까지의 M의 배수의 합을 구하시오

#include <stdio.h>

int main(void)
{
    int n, m, i, sum=0;
    scanf("%d %d", &n, &m);
    for (i=1; i<=n; i++){
        if (i % m == 0) sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
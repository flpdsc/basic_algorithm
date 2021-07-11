// 진약수의 합 구하기

#include <stdio.h>

int main(void)
{
    int n, i, sum=1;

    scanf("%d", &n);
    printf("%d", sum);
    for (i=2; i<n; i++){
        if(n % i == 0){
            printf("+%d", i);
            sum += i;
        }
    }
    printf("=%d\n", sum);
    return 0;
}
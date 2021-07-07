// 자연수의 합

#include <stdio.h>

int main(void)
{
    int a, b, i, sum=0;

    scanf("%d %d", &a, &b);

    for(i=a; i<b; i++){
        printf("%d + ", i);
        sum += i;
    }
    printf("%d = %d\n", i, sum+i);
    return 0;
}
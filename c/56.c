//재귀함수 분석
#include <stdio.h>

void recur(int x)
{
    if(x==0) return;
    else{
        recur(x-1);
        printf("%d ", x);
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);
    recur(n);
    printf("\n");    
    return 0;
}
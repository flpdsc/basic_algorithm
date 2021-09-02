//재귀함수 이진수 출력
#include <stdio.h>
void recur(int x)
{
    if(x==0) return;
    else{
        recur(x/2);
        printf("%d", x%2);
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
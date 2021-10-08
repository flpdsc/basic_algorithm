//계단오르기(Top-Down : 메모이제이션)
#include <stdio.h>
int dy[46];
int DFS(int n)
{
    if(dy[n]!=0) return dy[n];
    if(n==1||n==2) return n;
    else return dy[n] = DFS(n-1)+DFS(n-2);
}
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", DFS(n));
    return 0;
}
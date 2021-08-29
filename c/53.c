//K진수 출력
#include <stdio.h>

int stack[100];
int top=-1;

void push(int x)
{
    stack[++top] = x;
}

int pop(void)
{
    return stack[top--];
}

int main(void)
{
    int n, k;
    char str[17] = "0123456789ABCDEF";
    scanf("%d %d", &n, &k);
    while(n>0){
        push(n%k);
        n /= k;
    }
    while(top!=-1){
        printf("%c", str[pop()]);
    }
    printf("\n");
    return 0;
}
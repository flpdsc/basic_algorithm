//뒤집은 소수
#include <stdio.h>
#include <stdbool.h>

int reverse(int x)
{
    int tmp, res=0;
    while(x>0){
        tmp = x%10;
        res = res * 10 + tmp;
        x /= 10;
    }
    return res;
}

bool isPrime(int x)
// _Bool isPrime(int x) //return 0 or 1;
{
    for(int i=2; i<x; ++i){
        if(x%i==0) return false;
    }
    return true;
}

int main(void)
{
    int n, num, res;

    scanf("%d", &n);

    for(int i=1; i<=n; ++i){
        scanf("%d", &num);
        res = reverse(num);
        if(isPrime(res)) printf("%d ", res);
    }
    printf("\n");
    return 0;
}
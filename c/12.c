//숫자의 총 개수(큰 수)
#include <stdio.h>
int main(void)
{
    int n, c=1, d=9, sum=0, res;
    scanf("%d", &n);

    while(sum+d < n){
        res += (c*d);
        sum += d;
        c++;
        d *= 10;
    }
    res += (n-sum)*c;
    printf("%d\n", res);
    return 0;
}
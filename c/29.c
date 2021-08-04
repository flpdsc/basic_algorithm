//3의 개수는? (small)
#include <stdio.h>
int main(void)
{
    int i, n, tmp, digit, cnt=0;
    scanf("%d", &n);
    for(i=1;i<=n;++i){
        tmp = i;
        while(tmp>0){
            digit = tmp % 10;
            if(digit==3) cnt++;
            tmp /= 10;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
//숫자의 총 개수
#include <stdio.h>

int main(void)
{
    int n, i, cnt=0, tmp;
    scanf("%d", &n);
    for(i=1; i<=n; ++i){
        tmp = i;
        while(tmp > 0){
            tmp /= 10;
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
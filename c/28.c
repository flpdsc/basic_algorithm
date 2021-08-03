//N!에서 0의 개수
#include <stdio.h>
int main(void)
{
    int i, j, n, tmp, cnt2=0, cnt5=0;
    scanf("%d", &n);
    for(i=2; i<=n; ++i){
        tmp = i;
        j = 2;
        while(1){
            if(tmp%j==0){
                if(j==2) cnt2++;
                else if(j==5) cnt5++;
                tmp /= j;
            }
            else j++;
            if(tmp==1) break;
        }
    }
    if(cnt2 < cnt5) printf("%d\n", cnt2);
    else printf("%d\n", cnt5);
    return 0;
}
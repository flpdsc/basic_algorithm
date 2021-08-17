//연속된 자연수의 합
#include <stdio.h>
int main(void)
{
    int n, m=1, tmp, cnt=0, i;
    scanf("%d", &n);
    tmp = n;
    n--;
    while(n>0){
        m++;
        n -= m;
        if(n%m==0){
            for(i=1; i<m; ++i){
                printf("%d + ", i+(n/m));
            }
            printf("%d = %d\n", i+(n/m), tmp);
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
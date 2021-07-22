//소수의 개수
#include <stdio.h>

int main(void)
{
    int n, flag, cnt=0;
    scanf("%d", &n);
    for(int i=2; i<=n; ++i){
        flag = 1;
        for(int j=2; j*j<=i; ++j){
            if(i%j == 0){
                flag = 0;
                break;
            }
        }
        if (flag == 1) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
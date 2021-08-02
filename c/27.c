// N!의 표현법
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n, i, j, tmp, *ch;
    scanf("%d", &n);
    ch = (int*)calloc(n+1, sizeof(int));

    printf("%d! = ", n);
    for(i=2; i<=n; ++i){
        j = 2;
        tmp = i;
        while(1){
            if(tmp%j==0){
                ch[j]++;
                tmp /= j;
            }
            else j++;
            if(tmp==1) break;
        }
    }
    for(i=2; i<=n; ++i){
        if(ch[i]!=0) printf("%d ", ch[i]);
    }
    printf("\n");
    free(ch);
    return 0;
}
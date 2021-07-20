//가장 많이 사용된 자릿수
#include <stdio.h>

int ch[10];

int main(void)
{
    int i, max=-2147000000, digit, res;
    char a[101];

    scanf("%s", a);

    for(i=0; a[i]!='\0'; ++i){
        digit = a[i] - 48;
        ch[digit]++;
    }

    for(i=0; i<=9; ++i){
        if(ch[i] >= max){
            max = ch[i];
            res = i;
        }
    }

    printf("%d\n", res);

    return 0;
}
// 영어 단어 복구

#include <stdio.h>

int main(void)
{
    char a[101], b[101];
    int p=0, i;

    gets(a);
    
    for(i=0; a[i]!='\0'; ++i){
        if(a[i]!=' '){
            if(a[i]>=65 && a[i]<=90){
                b[p++]=a[i]+32;
            }else b[p++]=a[i];
        }
    }
    b[p] = '\0';
    printf("%s\n", b);

    return 0;
}
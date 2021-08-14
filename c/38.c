//Inversion Sequence
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i, j, n, *is, *os, pos;
    scanf("%d", &n);
    is = (int*)malloc(sizeof(int)*(n+1));
    os = (int*)malloc(sizeof(int)*(n+1));
    for(i=1; i<=n; ++i) scanf("%d", &is[i]);
    for(i=n; i>=1; --i){
        pos = i;
        for(j=1; j<=is[i]; ++j){
            os[pos] = os[pos+1];
            pos++;
        }
        os[pos]=i;
    }
    for(i=1; i<=n; ++i) printf("%d ", os[i]);
    printf("\n");
    free(is);
    free(os);
    return 0;
}
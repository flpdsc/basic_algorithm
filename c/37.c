//Least Recently Used(카카오 캐시 문제 변형)
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i, j, s, n, *cache, tmp, pos;
    scanf("%d %d", &s, &n);
    cache = (int*)malloc(sizeof(int)*s);
    for(i=0; i<n; ++i){
        scanf("%d", &tmp);
        pos = -1;
        for(j=0; j<s; ++j) if(cache[j]==tmp) pos = j;
        if(pos==-1){
            for(j=s-1; j>=1; --j) cache[j] = cache[j-1];
        }
        else{
            for(j=pos; j>=1; --j) cache[j] = cache[j-1];
        }
        cache[0] = tmp;        
    }
    for(i=0; i<s; ++i) printf("%d ", cache[i]);
    printf("\n");
    free(cache);
    return 0;
}
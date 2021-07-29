//온도의 최대값
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, n, k, *pArr, sum=0, max=-2147000000;
    scanf("%d %d", &n, &k);
    pArr = (int*)malloc(sizeof(int)*n);
    for(i=0; i<n; ++i){
        scanf("%d", &pArr[i]);
    }

    for(i=0; i<k; ++i) sum += pArr[i];
    max = sum;

    for(i=k; i<n; ++i){
        sum += pArr[i] - pArr[i-k];
        if(sum > max) max = sum;
    }
    free(pArr);
    printf("%d\n", max);
    return 0;
}
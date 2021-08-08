//선택정렬
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i, j, n, tmp, idx, *a;
    scanf("%d", &n);
    a = (int*)malloc(sizeof(int)*n);
    for(i=0; i<n; ++i){
        scanf("%d", &a[i]);
    }
    for(i=0; i<=n; ++i){
        idx = i;
        for(j=i+1; j<n; ++j){
            if(a[idx]>a[j]) idx = j;
        }
        tmp = a[i];
        a[i] = a[idx];
        a[idx] = tmp; 
    }
    for(i=0; i<n; ++i){
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
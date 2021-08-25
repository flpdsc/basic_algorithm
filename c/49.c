//블록의 최댓값
#include <stdio.h>
int a[10][10], b[10];
int main(void)
{
    int i, j, n, sum=0;
    scanf("%d", &n);
    for(i=0; i<n; ++i) scanf("%d", &b[i]);
    for(i=0; i<n; ++i){
        for(j=0; j<n; ++j){
            a[j][i] = b[i];
        }
    }

    for(i=0; i<n; ++i) scanf("%d", &b[i]);
    for(i=n-1; i>=0; --i){
        for(j=0; j<n; ++j){
            if(a[i][j]>b[i]) a[i][j]=b[i];
        }
    }
    
    // for(i=0; i<n; ++i){
    //     for(j=0; j<n; ++j){
    //         sum += a[i][j];
    //         printf("%d ", a[i][j]);
    //     }
    //     printf("\n");
    // }    
    printf("%d\n", sum);
    return 0;
}
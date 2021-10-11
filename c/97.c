//알리바바와 40인의 도둑(Bottom-Up)
#include <stdio.h>
int arr[20][20], dy[20][20];
int main(void)
{
    freopen("../data/97_input.txt", "rt", stdin);
    int n, i, j;
    scanf("%d", &n);
    for(i=0; i<n; ++i){
        for(j=0; j<n; ++j) scanf("%d", &arr[i][j]);
    }
    dy[0][0] = arr[0][0];
    for(i=1; i<n; ++i){
        dy[i][0] = dy[i-1][0]+arr[i][0];
        dy[0][i] = dy[0][i-1]+arr[0][i];
    }
    for(i=1; i<n; ++i){
        for(j=1; j<n; ++j){
            if(dy[i-1][j]>dy[i][j-1]) dy[i][j] = dy[i][j-1]+arr[i][j];
            else dy[i][j] = dy[i-1][j]+arr[i][j];
        }
    }
    printf("%d\n", dy[n-1][n-1]);
    return 0;
}
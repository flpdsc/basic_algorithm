//동전교환
#include <stdio.h>
int coin[12], dy[501];
int main(void)
{
    freopen("../data/100_input.txt", "rt", stdin);
    int n, m;
    scanf("%d", &n);
    for(int i=0; i<n; ++i) scanf("%d", &coin[i]);
    scanf("%d", &m);
    for(int i=1; i<=m; ++i) dy[i] = 500;
    for(int i=0; i<n; ++i){
        for(int j=coin[i]; j<=m; ++j){
            if(dy[j]>dy[j-coin[i]]+1) dy[j] = dy[j-coin[i]]+1;
        }
    }
    printf("%d\n", dy[m]);
    return 0;
}
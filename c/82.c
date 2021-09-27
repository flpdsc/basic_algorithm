//순열구하기(DFS : Depth First Search)
#include <stdio.h>

int n, r, cnt=0, a[16], ch[16], res[16];

void DFS(int L)
{
    if(L==r){
        for(int i=0; i<r; ++i) printf("%d ", res[i]);
        printf("\n");
        cnt++;
    }
    else{
        for(int i=1; i<=n; ++i){
            if(ch[i]==0){
                res[L] = a[i];
                ch[i] = 1;
                DFS(L+1);
                ch[i] = 0;
            }
        }
    }
}

int main(void)
{
    freopen("../data/82_input.txt", "rt", stdin);
    scanf("%d %d", &n, &r);
    for(int i=1; i<=n; ++i) scanf("%d", &a[i]);
    DFS(0);
    printf("%d\n", cnt);
    return 0;
}
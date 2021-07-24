//선생님 문제
#include <stdio.h>
int main(void)
{
    freopen("../data/17_input.txt", "rt", stdin);
    int n, q, a, sum=0;

    scanf("%d", &n);

    for(int i=0; i<n; ++i){
        scanf("%d %d", &q, &a);
        sum = 0;
        for(int j=1; j<=q; ++j){
            sum += j;
        }
        if(a==sum) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
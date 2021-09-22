//친구인가? (Union&Find 자료구조)
#include <stdio.h>

int unf[1001];

int Find(int v)
{
    if(v==unf[v]) return v;
    else return unf[v] = Find(unf[v]);
}

void Union(int a, int b)
{
    a = Find(a);
    b = Find(b);
    if(a!=b) unf[a] = b;
}

int main(void)
{
    freopen("../data/77_input.txt", "rt", stdin);
    int i, n, m, a, b;
    scanf("%d %d", &n, &m);
    for(i=1; i<=n; ++i) unf[i] = i;
    for(i=0; i<m; ++i){
        scanf("%d %d", &a, &b);
        Union(a, b);
    }
    scanf("%d %d", &a, &b);
    a = Find(a);
    b = Find(b);
    if(a==b) printf("YES\n");
    else printf("NO\n");
    return 0;
}
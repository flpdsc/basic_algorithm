//Ugly Numbers
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n, *a, p2, p3, p5, min=2147000000;
    scanf("%d", &n);
    a = (int*)calloc(n+1, sizeof(int));
    a[1] = p2 = p3 = p5 = 1;
    for(int i=2; i<=n; ++i){
        if(a[p2]*2<a[p3]*3) min = a[p2]*2;
        else min = a[p3]*3;
        if(a[p5]*5<min) min = a[p5]*5;
        if(a[p2]*2==min) p2++;
        if(a[p3]*3==min) p3++;
        if(a[p5]*5==min) p5++;
        a[i] = min;
    }
    printf("%d\n", a[n]);
    free(a);
    return 0;
}
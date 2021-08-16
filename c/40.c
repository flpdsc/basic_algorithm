//교집합(투포인터 알고리즘)
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) //오름차순 비교 함수
{
    int num1 = *(int *)a; 
    int num2 = *(int *)b;

    if (num1 < num2) return -1;    
    if (num1 > num2) return 1;
    return 0;
}

int main(void)
{
    int i, n, m, *a, *b, *c, p1=0, p2=0, p3=0;

    scanf("%d", &n);
    a = (int*)malloc(sizeof(int)*n);
    for(i=0; i<n; ++i) scanf("%d", &a[i]);    
    qsort(a, n, sizeof(int), compare);

    scanf("%d", &m);
    b = (int*)malloc(sizeof(int)*m);
    for(i=0; i<n; ++i) scanf("%d", &b[i]);    
    qsort(b, m, sizeof(int), compare);
    c = (int*)malloc(sizeof(int)*(n+m));

    while(p1<n&&p2<m){
        if(a[p1]==b[p2]){
            c[p3++] = a[p1++];
            p2++;
        }
        else if(a[p1]<b[p2]) p1++;
        else p2++;
    }
    free(a);
    free(b);

    for(i=0; i<p3; ++i) printf("%d ", c[i]);
    printf("\n");
    
    free(c);
    return 0;
}
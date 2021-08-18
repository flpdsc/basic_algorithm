//이분검색
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
    int n, m, i, *a, lt=0, rt, mid;
    scanf("%d %d", &n, &m);
    a = (int*)malloc(sizeof(int)*n);    
    for(i=0; i<n; ++i) scanf("%d", &a[i]);
    qsort(a, n, sizeof(int), compare);

    rt = n-1;
    while(lt<=rt){
        mid = (lt+rt)/2;
        if(a[mid]<m) lt = mid+1;
        else if(a[mid]>m) rt = mid-1;
        else break;

    }
    printf("%d\n", mid+1); 
    free(a);
    return 0;
}
//마굿간 정하기(이분검색 응용)

#include <stdio.h>
#include <stdlib.h>

int n;

int compare(const void *a, const void *b) //오름차순 비교 함수
{
    int num1 = *(int *)a; 
    int num2 = *(int *)b;
    if (num1 < num2) return -1;    
    if (num1 > num2) return 1;
    return 0;
}

int count(int len, int a[]){
    int cnt=1, pos=a[1];
    for(int i=2; i<=n; ++i){
        if(a[i]-pos>=len){
            cnt++;
            pos=a[i];
        }
    }
    return cnt;
}

int main(void)
{
    int c, *a, lt=1, rt, mid, res;
    scanf("%d %d", &n, &c);
    a = (int*)calloc(n+1, sizeof(int));
    for(int i=1; i<=n; ++i) scanf("%d", &a[i]);
    qsort(a, n+1, sizeof(int), compare);
    rt=a[n];
    while(lt<=rt){
        mid = (lt+rt)/2;
        if(count(mid, a)>=c){
            res = mid;
            lt = mid+1;
        }
        else rt = mid-1;
    }
    printf("%d\n", res);
    free(a);
    return 0;
}
//최대 부분 증가수열(LIS : Longest Increasing Subsequence)
#include <stdio.h>
int arr[1001], dy[1001];
int main(void)
{
    freopen("../data/95_input.txt", "rt", stdin);
    int n, res=0;
    scanf("%d", &n);
    for(int i=1; i<=n; ++i) scanf("%d", &arr[i]);
    dy[1] = 1;
    for(int i=2; i<=n; ++i){
        int max=0;
        for(int j=i-1; j>=1; --j){
            if(arr[i]>arr[j] && dy[j]>max) max = dy[j];
        }
        dy[i] = ++max;
        if(dy[i]>res) res = dy[i];
    }
    printf("%d\n", res);
    return 0;
}
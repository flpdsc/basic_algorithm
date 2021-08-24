//각 행의 평균과 가장 가까운 값
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    freopen("../data/48_input.txt", "rt", stdin);
    int i, j, a[9][9], tmp, min, diff, res;
    for(i=0; i<9; ++i){
        tmp = 0;
        for(j=0; j<9; ++j){
            scanf("%d", &a[i][j]);
            tmp += a[i][j];
        }
        tmp = (tmp/9.0)+0.5;
        printf("%d ", tmp);
        min = 2147000000;
        for(j=0; j<9; ++j){
            diff = abs(a[i][j]-tmp);
            if(diff<min){
                min = diff;
                res = a[i][j];
            }
            else if(diff==min&&a[i][j]>res) res = a[i][j];
        }
        printf("%d\n", res);
    }
    return 0;
}
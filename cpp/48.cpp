//각 행의 평균과 가장 가까운 값
#include <iostream>
using namespace std;
int main()
{
    freopen("../data/48_input.txt", "rt", stdin);    
    int i, j, a[9][9], tmp, min, diff, res;

    for(i=0; i<9; ++i){
        tmp = 0;
        for(j=0; j<9; ++j){
            cin >> a[i][j];            
            tmp += a[i][j];
        }
        tmp = (tmp/9.0)+0.5;
        cout << tmp << " ";
        min = 2147000000;        
        for(j=0; j<9; ++j){
            diff = abs(a[i][j]-tmp);
            if(min>diff){
                min = diff;
                res = a[i][j];
            }
            else if(min==diff&&a[i][j]>res){
                res = a[i][j];
            }
        }
        cout << res << endl;
    }
    return 0;
}
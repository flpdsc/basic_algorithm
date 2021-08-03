//N!에서 0의 개수
#include <iostream>
using namespace std;
int main()
{
    int i, j, n, tmp, cnt_2=0, cnt_5=0;
    cin >> n;
    for(i=2; i<=n; ++i){
        tmp = i;
        j = 2;
        while(1){
          if(tmp%j==0){
              if(j==2) cnt_2++;
              else if(j==5) cnt_5++;
              tmp /= j;
          }
          else j++;
          if(tmp==1) break;
        }
    }
    if(cnt_2 < cnt_5) cout << cnt_2 << endl;
    else cout << cnt_5 << endl;
    return 0;
}
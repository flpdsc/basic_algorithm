//3의 개수는? (large)
#include <iostream>
using namespace std;
int main()
{
    int n, lt, cur, rt, k=1, res=0;
    cin >> n;
    while(lt != 0){
        lt = n/(k*10);
        cur = n/k%10;
        rt = n%k;
        if(cur > 3){
            res += (lt+1)*k;
        }
        else if(cur < 3){
            res += lt*k;
        }
        else res += (lt*k)+(rt+1);
        k *= 10;
    }
    cout << res << endl;

    return 0;
}
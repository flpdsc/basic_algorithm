//N!의 표현법
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i, j, n, tmp;
    cin >> n;
    vector<int> ch(n+1);

    for(i=n; i>1; --i){
        tmp = i;
        j = 2;
        while(true){    //소인수분해
            if(tmp%j==0){
                tmp /= j;
                ch[j]++;
            }
            else j++;
            if(tmp==1) break;
        }
    }
    cout << n << "! = ";
    for(i=2; i<=n; ++i){
        if(ch[i]!=0) cout << ch[i] << " ";
    }
    cout << endl;
    return 0;
}
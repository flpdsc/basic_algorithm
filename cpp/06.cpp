// 숫자만 추출하여 약수 갯수 구하기

#include <iostream>
using namespace std;

int main()
{
    char a[100];
    int res=0, cnt=0, i;

    cin >> a;

    for(i=0; a[i]!='\0'; ++i){
        if(a[i]>=48 && a[i]<=57){
            res = res * 10 + (a[i]-48);
        }
    }
    cout << res << endl;

    for(i=1; i<=res; ++i){
        if(res % i == 0) cnt++;
    }
    cout << cnt << endl;
    
    return 0;
}
//가장 많이 사용된 자릿수
#include <iostream>
using namespace std;
int main()
{
    int b[10]={0, }, i, max=-2147000000, res;
    char a[101];

    cin >> a;

    for(i=0; a[i]!='\0'; ++i){
        b[a[i]-48]++;
    }

    for(i=0; i<=9; ++i){
        if(b[i] >= max){
            max = b[i];
            res = i;
        }
    }

    cout << res << endl;

    return 0;
}
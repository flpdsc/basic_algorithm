//올바른 괄호(문자열 컨트롤)

#include <iostream>
using namespace std;
int main()
{
    char a[100];
    int cnt=0, i;
    cin >> a;
    
    for(i=0; a[i]!='\0'; ++i){
        if(a[i] == '(') cnt++;
        else if(a[i] == ')') cnt--;
        if(cnt < 0) break;
    }
    if (cnt == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
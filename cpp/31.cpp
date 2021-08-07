//탄화수소 질량
#include <iostream>
using namespace std;
int main()
{
    char a[10];
    int i, c=0, h=0, p;
    cin >> a;
    if(a[1]=='H'){
        c=1;
        p=1;
    }
    else{
        for(i=1; a[i]!='H'; ++i) c = c*10+(a[i]-48);
        p = i;
    }
    if(a[p+1]=='\0') h=1;
    else{
        for(i=p+1; a[i]!='\0'; ++i) h = h*10+(a[i]-48);
    }
    cout << c*12+h << endl;
    return 0;
}
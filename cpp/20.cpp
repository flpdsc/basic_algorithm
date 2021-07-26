//가위 바위 보
#include <iostream>
using namespace std;
int main()
{
    int i, n, a[100], b[100];
    cin >> n;

    for(i=0; i<n; ++i){
        cin >> a[i]; 
    }
    for(i=0; i<n; ++i){
        cin >> b[i];
    }
    
    for(i=0; i<n; ++i){
        if(a[i]==b[i]) cout << "D" << endl;
        else if(a[i]==1){
            if(b[i]==2) cout << "B" << endl;
            else if(b[i]==3) cout << "A" << endl;
        } else if(a[i]==2){
            if(b[i]==3) cout << "B" << endl;
            else if(b[i]==1) cout << "A" << endl;
        } else if(a[i]==3){
            if(b[i]==1) cout << "B" << endl;
            else if(b[i]==2) cout << "A" << endl;
        }
    }
    return 0;
}
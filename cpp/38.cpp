//Inversion Sequence
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i, j, n, input, cnt;
    cin >> n;
    vector<int> s(n+1);
    for(i=1; i<=n; ++i){
        cin >> input;
        cnt = 0;
        for(j=1; j<=n; ++j){
            if(s[j]==0) cnt++;
            if(cnt==input+1) break;
        }
        s[j] = i;
    }
    for(i=1; i<=n; ++i) cout << s[i] << " ";
    cout << endl; 
    return 0;
}
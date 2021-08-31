//기차운행(stack 응용)
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{
    int i, n, in, out=1;
    vector<char> res;
    stack<int> s;

    cin >> n;
    for(i=1; i<=n; ++i){
        cin >> in;
        s.push(in);
        res.push_back('P');
        while(!s.empty()){
            if(out==s.top()){
                s.pop();
                res.push_back('O');
                out++;
            } else break;
        }
    }

    if(s.empty()){
        for(i=0; i<res.size(); ++i) cout << res[i];
    }
    else cout << "impossible";
    cout << endl;

    return 0;
}
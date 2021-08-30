//올바른 괄호(stack)
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<char> s;
    char tmp[31];
    cin >> tmp;
    for(int i=0; tmp[i]!='\0'; ++i){
        if(tmp[i]=='(') s.push(tmp[i]);
        else{
            if(s.empty()){
                cout << "NO" << endl;
                return 0;
            }
            else s.pop();
        }
    }
    if(s.empty())cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
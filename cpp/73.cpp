//최대힙(priority_queue : 우선순위 큐)
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    freopen("../data/73_input.txt", "rt", stdin);
    int n;
    priority_queue<int> pQ;
    while(1){
        cin >> n;
        if(n==-1) break;
        if(n==0){
            if(pQ.empty()) cout << -1 << endl;
            else{
                cout << pQ.top() << endl;
                pQ.pop();
            }
        }
        else pQ.push(n);
    }
    return 0;
}
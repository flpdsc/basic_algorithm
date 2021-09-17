//공주 구하기(큐 자료구조로 해결)
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int i, n, k, cnt=0;
    queue<int> Q;
    cin >> n >> k;
    for(i=1; i<=n; ++i) Q.push(i);
    while(!Q.empty()){
        cnt++;
        if(cnt%k!=0) Q.push(Q.front());
        if(Q.size()==1) cout << Q.front() << endl;
        Q.pop();
        if(cnt%k==0) cnt=0;
    }
    // while(!Q.empty()){
    //     for(i=1; i<k; ++i){
    //         Q.push(Q.front());
    //         Q.pop();
    //     }
    //     Q.pop();
    //     if(Q.size()==1){
    //         cout << Q.front() << endl;
    //         Q.pop();
    //     }
    // }
    return 0;
}
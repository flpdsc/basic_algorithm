//송아지 찾기(BFS : 상태트리탐색)
#include <iostream>
#include <queue>
using namespace std;

int ch[10001], d[3]={1, -1, 5};

int main()
{
    int s, e, x, pos;
    queue<int> Q;
    cin >> s >> e;
    ch[s] = 1;
    Q.push(s);
    while(!Q.empty()){
        x = Q.front();
        Q.pop();
        for(int i=0; i<3; ++i){
            pos = x+d[i];
            if(pos<=0||pos>10000) continue;
            if(pos==e){
                cout << ch[x] << endl; //excluding the level of root
                exit(0);
            }
            if(ch[pos]==0){
                ch[pos] = ch[x]+1; //level
                Q.push(pos);
            }
        }
    }
    return 0;
}
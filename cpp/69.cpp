//이진트리 넓이우선탐색(BFS)
#include <iostream>
#include <vector>
using namespace std;
int Q[10], front=-1, rear=-1, ch[10];
vector<int> map[10];
int main()
{
    freopen("../data/69_input.txt", "rt", stdin);
    int i, a, b, x;
    for(i=1; i<=6; ++i){
        cin >> a >> b;
        map[a].push_back(b);
        map[b].push_back(a);
        /* 1 2 3
        2 1 4 5
        3 1 6 7
        4 2
        5 2
        6 3
        7 3 */
    }
    Q[++rear] = 1;
    ch[1] = 1;
    while(front<rear){ 
        x = Q[++front];
        cout << x << " ";
        for(i=0; i<map[x].size(); ++i){
            if(ch[map[x][i]]==0){
                ch[map[x][i]] = 1;
                Q[++rear] = map[x][i];
            }
        }
    }
    cout << endl;
    return 0;
}
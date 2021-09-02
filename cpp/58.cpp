//이진트리 깊이우선탐색(DFS)
#include <iostream>
using namespace std;
void DFS(int v)
{
    if(v>7) return;
    else{
        // cout << v << " "; // Preorder
        DFS(v*2);
        // cout << v << " "; // Indorder
        DFS(v*2+1);
        // cout << v << " "; // Postdorder
    }
}
int main()
{
    DFS(1);
    cout << endl;
    return 0;
}
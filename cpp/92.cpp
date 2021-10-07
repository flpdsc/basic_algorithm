//네트워크 선 자르기(Top-Down : 재귀, 메모이제이션)
#include <iostream>
using namespace std;
int n, dy[46];
int DFS(int n)
{
    if(dy[n]>0) return dy[n];
    if(n==1||n==2) return n;
    else return dy[n] = DFS(n-1)+DFS(n-2);
}

int main()
{
    cin >> n;
    cout << DFS(n) << endl;
    return 0;
}
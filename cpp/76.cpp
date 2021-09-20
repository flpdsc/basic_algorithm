//이항계수(메모이제이션)
#include <iostream>
using namespace std;

int dy[21][21];

int DFS(int n, int r)
{
    if(dy[n][r]!=0) return dy[n][r]; //memoization
    if(n==r||r==0) return 1;
    else return dy[n][r] = DFS(n-1, r-1)+DFS(n-1, r);
}

int main()
{
    int n, r;
    cin >> n >> r;
    cout << DFS(n, r) << endl;
    return 0;
}
//마라톤
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i, j, n, rank;
    cin >> n;

    vector<int> cap(n+1);
    for(i=1; i<=n; ++i){
        cin >> cap[i];
    }

    for(i=1; i<=n; ++i){
        rank = 1;
        for(j=0; j<i; ++j){
            if(cap[i]<=cap[j]) rank++; 
        }
        cout << rank << " ";
    }
    cout << endl;
    return 0;
}
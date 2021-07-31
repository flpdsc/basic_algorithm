//Jolly Jumpers
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n, i, a, pre, now;
    cin >> n;
    cin >> pre;
    vector<int> J(n);

    for(i=1; i<n; ++i){
        cin >> now;
        a = abs(now - pre);
        J[a] = 1;
        pre = now;
    }

    for(i=1; i<n; ++i){
        if(J[i] == 0){
            cout << "NO" << endl;
            exit(0);
        } 
    }
    cout << "YES" << endl;

    return 0;
}
//Ugly Numbers
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i, n, p2=0, p3=0, p5=0;
    cin >> n;
    vector<int> a(n, 1);
    for(i=1; i<n; ++i){
        a[i] = a[p2]*2;
        if(a[i] > a[p3]*3) a[i] = a[p3]*3;
        if(a[i] > a[p5]*5) a[i] = a[p5]*5;
        if(a[i] == a[p2]*2) p2++; 
        if(a[i] == a[p3]*3) p3++; 
        if(a[i] == a[p5]*5) p5++; 
    }
    cout << a[n-1] << endl;
    return 0;
}
//Least Recently Used(카카오 캐시 문제 변형)
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i, j, s, n, tmp, pos;
    cin >> s >> n;
    vector<int> cache(s);
    for(i=0; i<n; ++i){
        cin >> tmp;
        pos = -1;
        for(j=0; j<s; ++j) if(cache[j]==tmp) pos = j;
        // miss
        if(pos==-1){
            for(j=s-1; j>=1; --j) cache[j] = cache[j-1];
        }
        // hit
        else{
            for(j=pos; j>=1; --j) cache[j] = cache[j-1];
        }
        cache[0] = tmp;        
    }
    for(i=0; i<s; ++i) cout << cache[i]<< " ";
    cout << endl;
    return 0;
}
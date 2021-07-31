//석차 구하기
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i, j, n;
    cin >> n;
    vector<int> score(n), rank(n, 1);

    for(i=0; i<n; ++i){
        cin >> score[i];
    }

    for(i=0; i<n; ++i){
        for(j=0; j<n; ++j){
            if(score[i] > score[j]) rank[j]++;
        }
    }
    for(i=0; i<n; ++i) cout << rank[i] << " ";
    cout << endl;
    return 0;
}
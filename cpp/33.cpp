//3등의 성적
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i, j, n, idx, tmp, cnt=1;
    cin >> n;
    vector<int> score(n);
    for(i=0; i<n; ++i){
        cin >> score[i];
    }
    for(i=0; i<=n; ++i){
        idx = i;
        for(j=i+1; j<n; ++j){
            if(score[idx]<score[j]) idx = j;
        }
        tmp = score[i];
        score[i] = score[idx];
        score[idx] = tmp;
    }
    for(i=1; i<n; ++i){
        if(score[i-1]>score[i]) cnt++;
        if(cnt==3){
            idx = i;
            break;
        }
    }
    cout << score[idx] << endl;
    return 0;
}
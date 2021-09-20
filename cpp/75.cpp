//최대 수입 스케쥴(priority_queue 응용문제)
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

struct Data{
    int income, period;
    Data(int a, int b){
        income = a;
        period = b;
    }
    bool operator<(const Data &b)const{
        return period>b.period;
    }
};

int main()
{
    freopen("../data/75_input.txt", "rt", stdin);
    int i, j, n, m, d, max=-2147000000, res=0;
    vector<Data> T; //수익(income)과 기간(period)
    priority_queue<int> pQ; //최대 수익(income)
    cin >> n;
    for(i=0; i<n; ++i){
        cin >> m >> d;
        T.push_back(Data(m, d));
        if(d>max) max = d;  //가장 긴 기간 max에 저장
    }
    sort(T.begin(), T.end());   //period 기준으로 정렬
    j=0;    // 이어서 비교하기 위해
    for(i=max; i>=1; --i){
        for( ; j<n; ++j){ //j가 초기화되지 않고 멈췄던 지점부터 시작
            if(T[j].period<i) break;
            pQ.push(T[j].income);   //pQ에 income값 push
        }
        if(!pQ.empty()){    //가장 큰 값을 res에 누적한 후 pop
            res += pQ.top();
            pQ.pop();
        }
    }
    cout << res << endl;
    return 0;
}
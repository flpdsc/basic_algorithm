//가장 높은 탑 쌓기
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Brick{
    int bottom, height, weight;
    Brick(int a, int b, int c){
        bottom = a;
        height = b;
        weight = c; 
    }
    bool operator<(const Brick &b)const{
        return bottom>b.bottom;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    freopen("../data/96_input.txt", "rt", stdin);
    int n, a, b, c;
    cin >> n;
    vector<Brick> Bricks;
    vector<int> dy(n);
    for(int i=0; i<n; ++i){
        cin >> a >> b >> c;
        Bricks.push_back(Brick(a, b, c));
    }
    sort(Bricks.begin(), Bricks.end());
    dy[0] = Bricks[0].height;
    int res = dy[0];
    for(int i=1; i<n; ++i){
        int max_h=0;
        for(int j=i-1; j>=0; --j){
            if(Bricks[i].weight<Bricks[j].weight && dy[j]>max_h) max_h=dy[j];
        }
        dy[i] = max_h+Bricks[i].height;
        res = max(res, dy[i]);
    }
    cout << res << endl;
    return 0;
}
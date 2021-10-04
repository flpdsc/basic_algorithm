//토마토(BFS 활용)
#include <iostream>
#include <queue>
using namespace std;

int box[1010][1010], dst[1010][1010];
int dx[4]={0, 1, 0, -1}; 
int dy[4]={-1, 0, 1, 0};

struct Loc{
	int x, y;
	Loc(int a, int b){
		x = a;
		y = b;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	freopen("../data/89_input.txt", "rt", stdin);
    int m, n, res=-2147000000;
    queue<Loc> Q;
    cin >> m >> n;
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=m; ++j){
			cin >> box[i][j];
			if(box[i][j]==1) Q.push(Loc(i, j));
		}
	}
	while(!Q.empty()){
		Loc tmp = Q.front();
		Q.pop();
		for(int i=0; i<4; ++i){
			int xx = tmp.x+dx[i];
			int yy = tmp.y+dy[i];
			if(box[xx][yy]==0){
				if(xx>=1&&xx<=n&&yy>=1&yy<=m){
					Q.push(Loc(xx, yy));
					box[xx][yy] = 1;
					dst[xx][yy] = dst[tmp.x][tmp.y] +1;
					if(res<dst[xx][yy]) res = dst[xx][yy];
				}
			}
		}
	}
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=m; ++j){
			if(box[i][j]==0){
				cout << -1 << endl;
				return 0;
			}
		}
	}
	cout << res << endl;
	return 0;
}
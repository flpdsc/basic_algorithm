//연속 부분 증가수열
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int i, n, cnt=1, max=0;
	cin >> n;
	vector<int> a(n+1);
	
	for(i=1; i<=n; ++i){
		cin >> a[i];
		if(max < cnt) max = cnt;
		if(a[i] >= a[i-1]) cnt++;
		else cnt = 1;
	}
	
	cout << max << endl;
	
	return 0;
}
//Anagram
//65(A)~90(Z), 97(a)~122(z)

#include <iostream>
using namespace std;

int a_cnt[52], b_cnt[52];

int main()
{
	bool flag=true;
	char a[101], b[101];
	cin >> a;
	cin >> b;
	for(int i=0; a[i]!='\0'; ++i){
		if(a[i] >= 65 && a[i] <= 90) a_cnt[a[i]-65]++;
        else a_cnt[a[i]-71]++;
		if(b[i] >= 65 && b[i] <= 90) b_cnt[b[i]-65]++;
        else b_cnt[b[i]-71]++;
	}
	for(int i=0; i<52; ++i){
		if(a_cnt[i] != b_cnt[i]){
			flag=false;
			break;
		}
	}
	if(flag) cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;
}
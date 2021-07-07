// 1부터 N까지의 M의 배수의 합을 구하시오

#include <iostream>
using namespace std;
int main()
{
    int n, m, i, sum=0;

    cin >> n >> m;

    for(i=1; i<=n; i++){
        if(i % m == 0){
            sum += i;
        }
    }
    cout << "1부터 "<< n << "까지의 " << m <<"의 배수의 합은" << sum << "입니다." << endl;
    return 0;
}
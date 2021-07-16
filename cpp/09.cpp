//모두의 약수

#include <iostream>

using namespace std;

int cnt[50001];
// 지역변수로 선언하면 메모리의 스택영역에 할당됨 (스택은 메모리가 작아 크기가 큰 배열을 선언하기에는 적당치 않음)
// 전역변수는 메모리 데이터 역영에 할당됨(크기가 큰 배열을 선언해도 문제없이 할당)

int main()
{
    // int cnt[50001]={0, }; // 배열을 전역으로 선언하면 기본값이 0으로 초기화되나, 지역변수는 0으로 초기화 된다는 보장이 없음
    int n, i, j;
    cin >> n;
    for(i=1; i<=n; ++i){
         for(j=i; j<=n; j+=i){
             cnt[j]++;
         }
    }
    for(i=1; i<=n; ++i){
        cout << cnt[i] << " ";
    }
    cout << endl;

    return 0;
}
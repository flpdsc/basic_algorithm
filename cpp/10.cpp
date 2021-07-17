//자릿수의 합
#include <iostream>
using namespace std;
int digit_sum(int x)
{
    int tmp, sum=0;

    while(x > 0){
        tmp = x % 10;
        sum += tmp;
        x /= 10;
    }
    return sum;
}

int main()
{
    int n, num, i, sum, max=-2147000000, res; //입력되는 자연수의 개수(n), 자연수(num), 자릿수 최대값을 가지는 결과값(res)
    cin >> n;
    for(i=0; i<n; ++i){
        cin >> num;
        sum = digit_sum(num);
        if(sum > max){
            max = sum;
            res = num;
        }
        else if(sum == max){
            if(num > res) res = num;
        }
    }
    cout << res << endl;
    return 0;
}
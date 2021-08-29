//K진수 출력
#include <iostream>
#include <vector>
using namespace std;

vector<int> stack;
int top=-1;

void push(int x)
{
    top++;
    stack.push_back(x);
}

int pop()
{
    return stack[top--];
}

int main()
{
    int n, k;
    char str[17] = "0123456789ABCDEF";
    cin >> n >> k;
    while(n>0){
        push(n%k);
        n /= k;
    }
    while(top!=-1){
        cout << str[pop()];
    }
    cout << endl;
    return 0;
}
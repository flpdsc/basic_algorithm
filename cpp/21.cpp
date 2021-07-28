//카드게임
#include <iostream>
using namespace std;
int main()
{
    int i, a_card[10], b_card[10], a=0, b=0, flag=0;
    for(i=0; i<10; ++i){
        cin >> a_card[i];
    }
    for(i=0; i<10; ++i){
        cin >> b_card[i];
    }

    for(i=0; i<10; ++i){
        if(a_card[i] == b_card[i]){
            a++;
            b++;
        }
        else if(a_card[i] > b_card[i]){
            a += 3;
            flag = 1;
        }
        else if(b_card[i] > a_card[i]){
            b += 3;
            flag = 2;
        }
    }

    cout << a << " " << b << endl;

    if(a > b) cout << "A" <<endl;
    else if(a < b) cout << "B" << endl;
    else{
        if(flag == 1) cout << "A" << endl;
        else if(flag == 2) cout << "B" << endl;
        else cout << "D" << endl;
    }

    return 0;
}
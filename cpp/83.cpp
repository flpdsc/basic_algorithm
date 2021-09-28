//복면산 SEND+MORE=MONEY (MS인터뷰)
#include <iostream>
using namespace std;

int a[10], ch[10];

/* D E M N O R S Y
   0 1 2 3 4 5 6 7 */

int send()
{
    return a[6]*1000 + a[1]*100 + a[3]*10 + a[0];
}
int more()
{
    return a[2]*1000 + a[4]*100 + a[5]*10 + a[1];
}

int money()
{
    return a[2]*10000 + a[4]*1000 + a[3]*100 + a[1]*10 + a[7];
}

void DFS(int L)
{
    if(L==8){
        if(send()+more()==money()){ //맨 앞자리 0 불가
            if(a[2]==0 || a[6]==0) return;
            cout << "  " << a[6] << " " << a[1] << " " << a[3] << " " << a[0] << endl;
            cout << "+ " << a[2] << " " << a[4] << " " << a[5] << " " << a[1] << endl;
            cout << "----------" << endl;
            cout << a[2] << " " << a[4] << " " << a[3] << " " << a[1] << " " << a[7] << endl;
        }
    }
    else{
        for(int i=0; i<10; ++i){
            if(ch[i]==0){
                a[L] = i;
                ch[i] = 1;
                DFS(L+1);
                ch[i] = 0;
            }
        }
    }
}
int main()
{
    DFS(0);
    return 0;
}
//복면산 SEND+MORE=MONEY (MS인터뷰)
#include <stdio.h>

int a[10], ch[10];
/* D E M N O R S Y
   0 1 2 3 4 5 6 7 */

int send(void)
{
    return a[6]*1000 + a[1]*100 + a[3]*10 + a[0];
}
int more(void)
{
    return a[2]*1000 + a[4]*100 + a[5]*10 + a[1];
}
int money(void)
{
    return a[2]*10000 + a[4]*1000 + a[3]*100 + a[1]*10 + a[7];
}

void DFS(int L)
{
    if(L==8){
        if(send()+more()==money()){
            if(a[2]==0||a[6]==0) return;
            printf("  %d %d %d %d\n", a[6], a[1], a[3], a[0]);
            printf("+ %d %d %d %d\n", a[2], a[4], a[5], a[1]);
            printf("----------\n");
            printf("%d %d %d %d %d\n", a[2], a[4], a[3], a[1], a[7]);
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

int main(void)
{
    DFS(0);
    return 0;
}

//이진트리 넓이우선탐색(BFS)
#include <stdio.h>
int Q[10], ch[10], front=-1, rear=-1, map[10][10], top[10];
void push(int x, int y)
{
    map[x][0] = x;
    map[x][++top[x]] = y;
}

int main(void)
{
    freopen("../data/69_input.txt", "rt", stdin);
    int i, a, b, x;
    for(i=1; i<=6; ++i){
        scanf("%d %d", &a, &b);
        push(a, b);
        push(b, a);
    }
    Q[++rear] = 1;
    ch[1] = 1;
    while(front<rear){
        x = Q[++front];
        printf("%d ", x);
        for(i=0; i<=top[x]; ++i){
            if(ch[map[x][i]]==0){
                ch[map[x][i]] = 1;
                Q[++rear] = map[x][i];
            }
        }
    }
    printf("\n");
    return 0;
}
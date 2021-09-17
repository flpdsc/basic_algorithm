//송아지 찾기(BFS : 상태트리탐색)
#include <stdio.h>
#include <stdlib.h>

int queue[10000], front, rear;
int ch[10001], d[3]={1, -1, 5};

void push(int data)
{
  queue[rear] = data;
  ++rear;
}

int pop(void)
{
  int tmp = front;
  ++front;
  return queue[tmp];
}

int main(void)
{
    int s, e, x, pos;
    scanf("%d %d", &s, &e);
    ch[s] = 1;
    push(s);
    while(front!=rear){
        x = queue[front];
        pop();
        for(int i=0; i<3; ++i){
            pos = x+d[i];
            if(pos<=0||pos>10000) continue;
            if(pos==e){
                printf("%d\n", ch[x]);
                exit(0);
            }
            if(ch[pos]==0){
                ch[pos] = ch[x]+1;
                push(pos);
            }
        }
    }
    return 0;
}
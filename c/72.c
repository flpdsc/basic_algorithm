//공주 구하기(큐 자료구조로 해결)
#include <stdio.h>

int queue[1000], front, rear;

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
    int i, n, k;
    scanf("%d %d", &n, &k);
    for(i=1; i<=n; ++i) push(i);
    while(front!=rear){
        for(i=1; i<k; ++i){
            push(queue[front]);
            pop();
        }
        pop();
        if(front==rear-1){
            printf("%d\n", queue[front]);
            pop();
        }
    }
    return 0;
}
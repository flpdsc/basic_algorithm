//위상정렬(그래프 정렬)
#include <stdio.h>
#include <stdlib.h>

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
    freopen("../data/104_input.txt", "rt", stdin);

    int n, m, **graph, *degree, a, b;

    scanf("%d %d", &n, &m);

    graph = (int**)calloc(n+1, sizeof(int*));
    for(int i=0; i<n+1; ++i) graph[i] = (int*)calloc(n+1, sizeof(int));

    degree = (int*)calloc(n+1, sizeof(int));

    for(int i=0; i<m; ++i){
        scanf("%d %d", &a, &b);
        graph[a][b] = 1;
        degree[b]++;
    }

    for(int i=1; i<=n; ++i){
        if(degree[i]==0) push(i);
    }

    while(front!=rear){
        int now = pop();
        printf("%d ", now);
        for(int i=1; i<=n; ++i){
            if(graph[now][i]==1){
                degree[i]--;
                if(degree[i]==0) push(i);
            }
        }
    }

    for(int i=0; i<n+1; ++i) free(graph[i]);
    free(graph);
    free(degree);

    return 0;
}
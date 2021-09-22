//최소비용(DFS : 가중치 방향그래프 인접리스트)
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int vertex;
    int cost;
    struct node *next;
}Node;

int n, ch[21], cost=2147000000;
Node *ptr[20];

void append(int a, int b, int c)
{
    if(ptr[a]==NULL){
        ptr[a] = malloc(sizeof(Node));
        ptr[a]->vertex = b;
        ptr[a]->cost = c;
        ptr[a]->next = NULL;
    }
    else{
        Node *cur = ptr[a];
        while(cur->next!=NULL) cur = cur->next;
        Node *newNode = malloc(sizeof(Node));
        newNode->vertex = b;
        newNode->cost = c;
        newNode->next = NULL;
        cur->next = newNode;
    }
}

void DFS(int v, int s)
{
    if(v==n){
        if(s<cost) cost = s;
    }
    else{
        Node *cur = ptr[v];
        while(cur!=NULL){
            if(ch[cur->vertex]==0){
                ch[cur->vertex] = 1;
                DFS(cur->vertex, s+cur->cost);
                ch[cur->vertex] = 0;
            }
            cur = cur->next;
        }
    }
}
int main(void)
{
    freopen("../data/67_input.txt", "rt", stdin);
    int m, a, b, c;
    scanf("%d %d", &n, &m);
    for(int i=1; i<=m; ++i){
        scanf("%d %d %d", &a, &b, &c);
        append(a, b, c);
    }
    ch[1] = 1;
    DFS(1, 0);
    printf("%d\n", cost);

    //free
    for(int i=1; i<n; ++i){
        while(ptr[i]){
            Node *tmp = ptr[i];
            ptr[i] = ptr[i]->next;
            free(tmp);
        }
    }

    return 0;
}
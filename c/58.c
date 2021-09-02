//이진트리 깊이우선탐색(DFS)
#include <stdio.h>
void DFS(int v)
{
    if(v>7) return;
    else{
        // printf("%d ", v); // Preorder
        DFS(v*2);
        // printf("%d ", v); // Inorder
        DFS(v*2+1);
        // printf("%d ", v); // Postorder
    }
}
int main(void)
{
    DFS(1);
    printf("\n");
    return 0;
}
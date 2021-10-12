//알리바바와 40인의 도둑(Top-Down)
#include <stdio.h>

int arr[20][20], dy[20][20];

int DFS(int x, int y)
{
    if(dy[x][y]!=0) return dy[x][y];
    if(x==0 && y==0) return arr[0][0];
    else{
        if(y==0) return dy[x][y] = DFS(x-1, y)+arr[x][y];
        else if(x==0) return dy[x][y] = DFS(x, y-1)+arr[x][y];
        else{
            if(DFS(x-1, y)>DFS(x, y-1)) return dy[x][y] = DFS(x, y-1)+arr[x][y];
            else return dy[x][y] = DFS(x-1, y)+arr[x][y];
        }
    }
}

int main(void)
{
    // freopen("../data/97_input.txt", "rt", stdin);
    int n, i, j;
    scanf("%d", &n);
    for(i=0; i<n; ++i){
        for(j=0; j<n; ++j){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("%d\n", DFS(n-1, n-1));
    return 0;
}
//기차운행(stack 응용)
#include <stdio.h>
int stack[30], tos=-1;
void push(int x)
{
    stack[++tos] = x;
}

int pop(void)
{
    return stack[tos--];
}

int main(void)
{
    int i, n, in, out=1, rp=0;
    char res[61];
    scanf("%d", &n);
    for(i=1; i<=n; ++i){
        scanf("%d", &in);
        push(in);
        res[rp++] = 'P';
        while(tos!=-1){
            if(stack[tos]==out){
                pop();
                res[rp++] = 'O';
                out++;
            }
            else break;
        }
    }
    if(tos!=-1) printf("impossible");
    else{
        for(i=0; res[i]!='\0'; ++i) printf("%c", res[i]);
    }
    printf("\n");
    return 0;
}
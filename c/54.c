//올바른 괄호(stack)
#include <stdio.h>
int stack[31];
int tos=-1;
void push(int x)
{
    x = stack[++tos];
}

int pop(void)
{
    return stack[tos--];
}

int main(void)
{
    int i, flag=1;
    char tmp[31];
    scanf("%s", tmp);
    for(i=0; tmp[i]!='\0'; ++i){
        if(tmp[i]=='(') push(tmp[i]);
        else{
            if(tos==-1){
                printf("NO\n");
                flag = 0;
                break;
            }
            else pop();
        }
    }
    if(tos==-1 && flag==1) printf("YES\n");
    else if(tos!=-1 && flag==1) printf("NO\n");
    return 0;
}
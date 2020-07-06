#include <stdio.h>
#include <string.h>

typedef struct _stack{
    int stackarr[10000];
    int topIdx;
}Stack;
int stackInit(Stack * pstack){
    pstack->topIdx = -1;
    }
int pop(Stack * pstack){
    if(pstack->topIdx == -1){
    	return -1;
    }else{
        return pstack->stackarr[pstack->topIdx--];                
    }
}
int size(Stack * pstack){
    return pstack->topIdx + 1;
}
int empty(Stack * pstack){
    if(pstack->topIdx == -1){
        return 1;
    }else{
        return 0;
    }
}
int top(Stack * pstack){
        if(pstack->topIdx == -1){
            return -1;
        }else{
            return pstack->stackarr[pstack->topIdx];
        }
    }
void push(Stack * pstack, int value){
    pstack->stackarr[++(pstack->topIdx)] = value;
}
    
int main(){
    char cmd[12] = {0, };
    int cmds = 0, push_value = 0;
    scanf("%d", &cmds);
    Stack st;
    stackInit(&st);
    for(;cmds > 0; cmds--){
        scanf(" %[^\n]s", cmd);

        if(strcmp(cmd, "pop") == 0){ //commend "pop"
            printf("%d\n", pop(&st));
        }else if(strcmp(cmd, "size") == 0){ //commend "size"
            printf("%d\n", size(&st));
        }else if(strcmp(cmd, "empty") == 0){ //commend "empty"
            printf("%d\n", empty(&st));
        }else if(strcmp(cmd, "top") == 0){ //commend "top"
            printf("%d\n", top(&st));
        }else{ //commend "push ##"
            sscanf(cmd, "push %d", &push_value);
            push(&st, push_value);
        }
    }

    return 0;
}

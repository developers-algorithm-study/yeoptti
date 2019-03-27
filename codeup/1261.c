#include <stdio.h>

int main(){
    int var;
    int i;
    for(i=0;i<10;i++){
        scanf("%d", &var);
        if(var%5==0){
            printf("%d", var);
            return 0;
        }else{
            var=0;
        }
    }
    printf("%d", var);
    return 0;
}

#include <stdio.h>

int main(){
    int numbers[10]={0, };
    int temp;
    while((temp=getchar()) != EOF){
        numbers[temp-'0']++;
    }
    int i;
    for(i=0; i<10; i++){
        printf("%d ", numbers[i]);
    }
    return 0;
}

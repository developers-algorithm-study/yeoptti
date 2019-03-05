#include <stdio.h>
#include <unistd.h>

int main(){
    int n=10, k=3, i, j, a=20000; scanf("%d %d", &n, &k);
    while(a--){
        for(i=1; i<=n; i++){
            for(j=1; j<=n; j++){
               if((i==1)||(j==1)||(i==n)||(j==n)){
                    printf("*");
                }else if((j+i+a)%k==1){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
        }
        usleep(100000);  //set interval (100ms)
        printf("\e[1;1H\e[2J");    //clear screen
    }
}

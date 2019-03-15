#include <stdio.h>

int main(){
    int n=10, k=3, i, j; scanf("%d %d", &n, &k);    //변수 선언 및 입력받기
    for(i=1; i<=n; i++){    //한 줄마다 반복문 실행
        for(j=1; j<=n; j++){    //한 글자마다 반복문 실행
            if((i==1)||(j==1)||(i==n)||(j==n)){    //테두리일 경우 *출력
                printf("*");
            }else if((j+i)%k==1){   //빗금위치일 경우 *출력
                printf("*");
            }else{
                printf(" ");    //둘 다 아닐경우 공백 출력
            }
        }
        printf("\n");
    }
}

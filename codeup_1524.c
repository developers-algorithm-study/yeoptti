#include <stdio.h>

int main(){
    int map[11][11]={{0}, }, r, c, i, j, p, sum=0;
    int pxy[8][2]={{-1,-1},{0,-1},{1,-1},{-1,0},{1,0},{-1,1},{0,1},{1,1}};
    
    for(i=1; i<5; i++){
        for(j=1; j<5; j++){
            scanf("%d", &map[i][j]);
        }
    }
    scanf("%d %d", &r, &c);
    if(map[r][c]==1){
        sum = -1;
    }else{
        for(p=0; p<8; p++){
		           sum+=map[r+pxy[p][0]][c+pxy[p][1]];
		       }
    }
    printf("%d", sum);


    return 0;
}

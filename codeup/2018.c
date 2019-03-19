#include <stdio.h>
#include <string.h>

void next(int *arr);
int main(){
    int a,b; scanf("%d %d", &a, &b);
    int arr[904] = {0, };
    int i,j;
    for(i=1;i<a;i++){
        next(arr);
    }
    for(i=a;i<=b;i++){
        next(arr);
        for(j=0;arr[j];j++){
            printf("%d", arr[j]);
        }
        printf("\n");
    }
    return 0;
}
void next(int *arr){
    if(!arr[0]) {
        arr[0]=1;
        return;
    }
    int tmp[904]={0, };
    int i, cur=0, n, m;
    for(i=0;arr[i];i++){
        m=1;
        n = arr[i];
        while(arr[i]==arr[i+1]){
            i++;
            m++;
        }
        tmp[cur++]=n;
        tmp[cur++]=m;
    }
    memcpy(arr, tmp, sizeof(tmp));
    
}

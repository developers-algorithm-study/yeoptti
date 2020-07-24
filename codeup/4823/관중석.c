#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef ONLINE_JUDGE
#define DEBUG 1
#else
#define DEBUG 0
#endif

int get_gcd(int u, int v){
	if(v == 0){
		return u;
	} else{
		return get_gcd(v, u%v);
	}
}
int chk[20001][20001];
int main(){
	int D1, D2, k, count = 0;
	
	scanf("%d %d", &D1, &D2);
	
	
	for(int i=D1; i<=D2; i++)
		for(int j = 1; j<=i; j++){
			k = get_gcd(i, j);
			if(!chk[i/k][j/k]){
				chk[i/k][j/k] = 1;
				count++;
			}
		}
	printf("%d", count);
	return 0;
}

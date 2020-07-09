#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef ONLINE_JUDGE
#define DEBUG 1
#else
#define DEBUG 0
#endif

#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))

int main(){
	int w, h, min, max;
	int *map;
	

	scanf("%d %d", &w, &h);
	if(DEBUG){
		printf("%d %d\n", w, h);
	}
	max = max(w, h);
	min = min(w, h);
	map = (int *)malloc(sizeof(int)*(max+1));
	map[0] = 0;
	for(int i = 1; i<max+1; i++){
		map[i] = 1;
	}
	for(int i = 1; i < min; i++){
		for(int j = 1; j<=max; j++){
			map[j] = (map[j-1] + map[j]) % 1000000000;
		}
	}
	printf("%d\n", map[max]);
	return 0;
}

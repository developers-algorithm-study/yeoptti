#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef ONLINE_JUDGE
#define DEBUG 1
#else
#define DEBUG 0
#endif


int main(){
	int T, a, b, c;
	scanf("%d", &T);
	if(T%10){
		printf("-1");
	} else{
		a = T/300;	T %= 300;
		b = T/60;	T %= 60;
		c = T/10;
		printf("%d %d %d", a, b, c);
	}
	

	return 0;
}

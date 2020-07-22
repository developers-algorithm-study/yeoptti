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
	char id[9];
	
	scanf("%8s", id);
	printf("%d%c%c/%c%c/%c%c %c", id[7]>'2'?20:19, id[0], id[1], id[2], id[3], id[4], id[5], id[7]%2?'M':'F');
	return 0;
}

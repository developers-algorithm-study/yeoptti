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
	int N, vote[3]={0}, vote3[3]={0}, vote2[3]={0}, temp;
	scanf("%d", &N);
	while(N--){
		for(int i = 0; i<3; i++){
			scanf("%d", &temp);
			vote[i] += temp;
			if(temp==3){
				vote3[i]++;
			} else if(temp==2){
				vote2[i]++;
			}
		}
	}
	
	if(vote[0]>vote[1]&&vote[0]>vote[2]){
		printf("1 %d", vote[0]);
	} else if(vote[1]>vote[2]&&vote[1]>vote[0]){
		printf("2 %d", vote[1]);
	} else if(vote[2]>vote[0]&&vote[2]>vote[1]){
		printf("3 %d", vote[2]);
	} else{
		if(vote[0]!=vote[1] && vote[1]!=vote[2]){
			if(vote3[0]>vote3[2]){
				printf("1 %d", vote[0]);
			} else if(vote3[0]<vote3[2]){
				printf("3 %d", vote[2]);
			} else{
				if(vote2[0]>vote2[2]){
					printf("1 %d", vote[0]);
				} else if(vote2[0]<vote2[2]){
					printf("3 %d", vote[2]);
				} else{
					printf("0 %d", vote[0]);
				}
			}
		} else if(vote[1]!=vote[2]&&vote[2]!=vote[0]){
			if(vote3[0]>vote3[1]){
				printf("1 %d", vote[0]);
			} else if(vote3[0]<vote3[1]){
				printf("2 %d", vote[1]);
			} else{
				if(vote2[0]>vote2[1]){
					printf("1 %d", vote[0]);
				} else if(vote2[0]<vote2[1]){
					printf("2 %d", vote[1]);
				} else{
					printf("0 %d", vote[0]);
				}
			}
		} else{
			if(vote3[1]>vote3[2]){
				printf("2 %d", vote[1]);
			} else if(vote3[1]<vote3[2]){
				printf("3 %d", vote[2]);
			} else{
				if(vote2[1]>vote2[2]){
					printf("2 %d", vote[1]);
				} else if(vote2[1]<vote2[2]){
					printf("3 %d", vote[2]);
				} else{
					printf("0 %d", vote[1]);
				}
			}
		}
	}

	return 0;
}

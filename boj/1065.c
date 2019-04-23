#include <stdio.h>

int main() {
	int x, hansu=0;
	scanf("%d", &x);
	for(int test=1; test<=x; test++){
		if(test<100){ 
			hansu++;
			continue;
		}else if(test==1000) { 
			continue;
		}
		
		int a=test/100,b=test/10%10,c=test%10; 
		if(a==b&&b==c){
			hansu++;
		}else if(a-b==b-c){
			hansu++;
		}
	}
	printf("%d", hansu);
	return 0;
}

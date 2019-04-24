#include <stdio.h>
#include <math.h>
#define logB(x, base) log(x)/log(base)

int main(){
	int t, j, h;
	scanf("%d %d %d", &t, &j, &h);
	t=pow(2.0, ceil(logB(t, 2.0)));
	j-=1; h-=1;
	while(t!=1){
		if(t/2<=j && t/2<=h){
			t/=2;
			j-=t; h-=t;
		}else if(t/2>j && t/2>h){
			t/=2;
		}else{
			printf("%d", (int)(logB(t, 2.0)));
			return 0;
		}
	}
	printf("1");
	return 0;
}

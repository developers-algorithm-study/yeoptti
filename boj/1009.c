#include <stdio.h>

int main() {
	int n, a, b; scanf("%d", &n);
	int computer;
	while(n--){
		computer=1;
		scanf("%d %d", &a, &b);
		for(int i=0;i<b;i++){
			computer=computer*a%10;
		}
		printf("%d\n", computer%10 ? computer%10 : 10);
	}
}

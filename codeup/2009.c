#include <stdio.h>

int main() {
	int n, k, coffee=0; scanf("%d %d", &n, &k);
	while(n>=k){
		coffee+=n/k;
		n=n%k+n/k;
	}
	printf("%d", coffee);
}

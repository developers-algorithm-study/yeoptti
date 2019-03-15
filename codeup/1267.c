#include <stdio.h>

int main() {
	int n, tmp, sum=0; scanf("%d", &n);
	while(n--){
		scanf("%d", &tmp);
		sum+=tmp%5==0 ? tmp : 0;
	}
	printf("%d", sum);
	return 0;
}

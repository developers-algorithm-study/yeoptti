#include <stdio.h>

int main() {
	int n, k[1000] = {0, }; scanf("%d", &n); for(int i=0; i<n; i++) scanf("%d", &k[i]);	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)	printf("%d ", k[(j+i)%n]);
		printf("\n");
	}
	return 0;
}

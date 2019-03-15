#include <stdio.h>

int main() {
	int n; scanf("%d", &n); int m=n;
	int arr[15][15] = {0, };
	int row=-1, col=0, inc=1, value=1;
	for(int i=0; i<m;){
		for(int j=0; j<m;j++){
			row += inc;
			arr[row][col] = value++;
		}
		m--;
		for(int j=0; j<m;j++){
			col += inc;
			arr[row][col] = value++;
		}
		inc*=-1;
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
}

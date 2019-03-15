#include <stdio.h>

void set_next_generation(int board[172][172], int a, int b, int x, int y, int z);

int main() {
	int a, b, x, y, z, k; scanf("%d %d", &a, &b); scanf("%d %d %d", &x, &y, &z);
	int board[172][172] = {0, };
	for(int i=1; i<=a; i++)	for(int j=1; j<=b; j++)	scanf("%d", &board[i][j]);
	scanf("%d", &k);
	
	while(k--) {
		set_next_generation(board, a, b, x, y, z);
	}
	
	for(int i=1; i<=a; i++)	{
		for(int j=1; j<=b; j++) printf("%d ", board[i][j]);
		printf("\n");
	}
	return 0;
}
void set_next_generation(int board[172][172], int a, int b, int x, int y, int z){
	//dead == 0, alive == 1
	int pxy[8][2]={{-1,-1},{0,-1},{1,-1},{-1,0},{1,0},{-1,1},{0,1},{1,1}};
	int sum;
	int new_board[172][172] = {0, };
	for(int i=1; i<=a; i++)	{
		for(int j=1; j<=b; j++){
			new_board[i][j] = board[i][j];
		}
	}
	for(int i=1; i<=a; i++) {
		for(int j=1; j<=b; j++){
			sum = 0;
			for(int p=0; p<8; p++){
		        sum+=board[i+pxy[p][0]][j+pxy[p][1]];
		    }
			if(board[i][j] == 0){
				new_board[i][j] = sum == x ? 1 : 0;
			}else{
				new_board[i][j] = (sum<z && sum>=y) ? 1 : 0;
			}
		}
	}
	for(int i=1; i<=a; i++)	{
		for(int j=1; j<=b; j++){
			board[i][j] = new_board[i][j];
		}
	}
	return;
}

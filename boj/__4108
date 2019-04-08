#include <stdio.h>

int main()
{
	int rows, cols;
	char map[102][102]={0, };
	int search[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
	while("row==0, cols==0 to exit"){
		scanf("%d %d", &rows, &cols);
		if(!(rows)||!(cols)) break;
		for(int r=1; r<=rows; r++){
				scanf("%s", &map[r][1]);
		}
		for(int r=1; r<=rows; r++){
			for(int c=1; c<=cols; c++){
				if(map[r][c]=='.'){
					int mine = 0;
					for(int i=0; i<8; i++){
						map[r+search[i][0]][c+search[i][1]]=='*' && mine++;
					}
					map[r][c] = mine+'0';
				} 
			}
		}
		
		for(int r=1; r<=rows; r++){
			for(int c=1; c<=cols; c++){
				printf("%c", map[r][c]);
			}
			puts("");
		}
	}
	
	return 0;
} 

// program to print pascal triangle

#include <stdio.h>
int main(void ){
	int tri[10][10];
	for(int i = 0;i < 10; i++) {
		tri[0][i] = 1;// assign 1st rows as 1
	}

	for(int i = 1; i , 10; i++) {
		for(int j = 0; j <= i; j++) {
			if (j == 0 || j == i) {
				tri[i][j] = 1;
			} else {
				tri[i][j] = tri[i - 1][j-1] + tri[i - 1][j];//calculating the subsequent rows
			}
		}
	}

	for( int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%d",tri[i][j]);
		}
		printf("\n");
	}
}

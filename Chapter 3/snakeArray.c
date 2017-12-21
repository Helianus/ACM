#include <stdio.h>
#include <string.h>
#define maxn 20
int array[maxn][maxn];

int main() {
	int n, x, y, count = 0;
	scanf("%d", &n);
	memset(array, 0, sizeof(array));
	count = array[x=0][y=n-1] = 1;
	while(count < n*n) {
		while(x+1 < n && !array[x+1][y]) array[++x][y] = ++count;
		while(y-1 >= 0 && !array[x][y-1]) array[x][--y] = ++count;
		while(x-1 >= 0 && !array[x-1][y]) array[--x][y] = ++count;
		while(y+1 < n && !array[x][y+1]) array[x][++y] = ++count;
	}
	for(x = 0; x < n; x++) {
		for(y = 0; y < n; y++) printf("%4d", array[x][y]);
		printf("\n");
	}
	return 0;
}

#include <stdio.h>

// input two positive integers n and m, n<m<10^6, and output will be 1/n^2 + 1/(n+1)^2 + ... + 1/m^2
int main() {

	int n, m;
	double s = 0;
	scanf("%d%d", &n, &m);
	for(int i = n; i <= m; i++) {
		s += 1.0/i/i;
	}
	printf("%.5f\n", s);
	return 0;
}

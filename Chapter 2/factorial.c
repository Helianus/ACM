#include <stdio.h>
#include <time.h>

// Input n, and compute the last 6 numbers of S = 1! + 2! + 3! + ... + n!
// and output the time the function used.
int main() {
	const int MOD = 1000000;
	int n, S = 0;
	scanf("%d", &n);
	if(n > 25) {
		n = 25; // Because after 25!, the factorial has only six 0s in the end
	}
	for(int i = 1; i <= n; i++) {
		int factorial = 1;
		for(int j = 1; j <= i; j++)
			factorial = (factorial * j % MOD);
		S = (S + factorial) % MOD;
	}

	printf("%d\n", S);
	printf("Time used = %.2f\n", (double) clock() / CLOCKS_PER_SEC);
	return 0;
}

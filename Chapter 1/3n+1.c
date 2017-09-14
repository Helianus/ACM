#include <stdio.h>

// 3n+1 problem, n > 1 for any natural number n which if n is odd, 3n+1, otherwise n/2
// n will become 1 finally.
int main() {
	int n2, count = 0;
	scanf("%d", &n2);
	long long n = n2;
	while(n > 1) {
		if(n % 2 == 1) n = n*3+1;
		else n /= 2;
		count++; // Record the times that the n changed
	}
	printf("%d\n", count);
	return 0;
}

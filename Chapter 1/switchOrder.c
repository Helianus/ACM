#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n); // scanf must has '&'.
	printf("%d%d%d\n", n%10, n/10%10, n/100); // seperate the ones, tens, hundreds.
	return 0;
}

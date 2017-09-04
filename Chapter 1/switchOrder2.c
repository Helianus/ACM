#include <stdio.h>

int main() {
	int n, m; // n for input, m for output
	scanf("%d", &n);
	m = (n%10)*100 + (n/10%10)*10 + (n/100); // switch the order
	printf("%03d\n", m); // "%03d" makes 520 to be 025, if we need 25, just using "%d".
	return 0;
}

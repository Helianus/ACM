#include <stdio.h>

int main() {

// find the number that can be divided by 3 and 5 and 7
	int a, b, c, cases = 0;
	while(scanf("%d%d%d", &a, &b, &c) != EOF) {
		int n = 10;
		while(n <= 100) {
			if(n%3 == a && n%5 == b && n%7 == c) {
				printf("Case%d:%d\n", ++cases, n);
				break;
			}
			else n++;

			if(n > 100)
				printf("Case%d: No answer\n", cases++);
		}
	}
	return 0;
}

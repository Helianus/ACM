#include <stdio.h>

// Check if the input is leap year or not
// if it can be divided by 400, yes
// if it can be divided by 4 but 100, yes
// else, not
int main() {
	int year;
	scanf("%d", &year);
	if(year%400 == 0) {
		printf("yes\n");
	}
	else if(year%4 == 0 && year%100 != 0) {
		printf("yes\n");
	}
	else {
		printf("no\n");
	}
	return 0;
}

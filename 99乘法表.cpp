#include <stdio.h>

int main() {
	int i, j;
	int sum;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (j <= i) {
				sum = i * j;
				printf("%d*%d=%d\t", i, j, sum);
			}
		}
		printf("\n");
	}
	return 0;
}
#include <stdio.h>
#include <math.h>

int main() {
	int i, j, a, b, c, d;
	for (i = 1000; i <= 9999; i++) {
		a = i % 10;
		b = i / 10 % 10;
		c = i / 100 % 10;
		d = i / 1000;
		j = pow(a, 4) + pow(b, 4) + pow(c, 4) + pow(d, 4);
		if (i == j)
			printf("%d\n", i);
	}
	return 0;
}
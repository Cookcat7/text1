#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	srand(time(0));
	int a = rand() % 900 + 100;
	int i, j, k;
	i = a / 100;
	j = a / 10 % 10;
	k = a % 10;
	if (a == i * i * i + j * j * j + k * k * k) {
		printf("%-5d��ˮ�ɻ���", a);
	} else {
		printf("%-5d����ˮ�ɻ���", a);
	}
	printf("\n");
	return 0;
}

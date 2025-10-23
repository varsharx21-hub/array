
#include <stdio.h>

int main(void) {
	int sum = 0;
	int i;

	/* Sum the first 10 even numbers: 2, 4, 6, ..., 20 */
	for (i = 1; i <= 10; ++i) {
		sum += 2 * i;
	}

	printf("Sum of first 10 even numbers = %d\n", sum);
	return 0;
}


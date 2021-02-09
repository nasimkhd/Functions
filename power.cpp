#include <stdio.h>

int power(int base, int exponent ) {
	int i ;
	int result;
	result = 1;
	for (i = 0; i < exponent; i++) {
		result = result * base;
	}
	return result;
}

int main(void) {
	int exp, base, answer;

	printf(" insert a base number: ");
	scanf_s("%d", &base);
	printf("insert a exponent:");
	scanf_s("%d", &exp);

	answer = power(base, exp);
	printf("%d^%d= %d", base, exp, answer);


}
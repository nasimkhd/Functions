#include <stdio.h>

void printChars(char ch, int howMany) {

	for (int i = 0; i < howMany; i++) {
		printf("%c", ch);
	}
	printf("\n");
}

int pow(int a, int pow) {
	int result = 1;
	for (int i = 0; i < pow; i++) {
		result += a;
	}
	return result;
}
int main() {
	printChars('*', 14);
	printf("%4s%7s\n", "N", "2^N");
	for (int i = 0; i < 9; i++) {
		printf("%4d%6d\n", i, pow(2, i));
	}
	printChars('-', 14);
	return 0;
}
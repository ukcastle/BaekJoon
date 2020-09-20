#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

int sum(int* array, int num) {
	int result{};
	for (int i = 0; i < num/sizeof(int); i++) {
		result += array[i];
	}
	return result;
}

int main() {

	int array[5] = { 10,30,40,30,20 };
	printf("배열의 합은 %d 입니다.\n", sum(array, sizeof(array)));

	return 0;
}
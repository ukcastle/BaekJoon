#include <stdio.h> 
#include <stdlib.h>

int p, q, r;
void sum_global() {
	r = p + q;
}
void sum_callbyval(int a, int b){
	//??
}

int sum_retbyval(int a, int b) {
	return a + b;
}
void sum_callbyref(int* a, int* b, int* res) {
	*res = *a + *b;
}
int* sum_retbyref(int* a, int* b) {
	int* pRetrun = (int *)malloc(sizeof(int));
	*pRetrun = *a + *b;
	return pRetrun;
}

int main() {
	int a = 20, b = 30, res;
	p = a; 
	q = b;


	sum_global(); 
	printf("After sum_global(): %d + %d = %d\n", p, q, r);

	sum_callbyval(a, b); 
	printf("Data transfer by call by val : a= %d, b = %d \n", a, b);

	res = sum_retbyval(a, b); 
	printf("Data transfer by return by val : %d \n", res);

	sum_callbyref(&a, &b, &res); 
	printf("Data transfer by call by ref : %d + %d = %d\n", a, b, res);

	res = *sum_retbyref(&a, &b); 
	printf("Data transfer by return by ref : %d \n", res);
	return 0;
}
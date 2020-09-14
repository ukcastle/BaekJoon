#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable:4996)

int main() {
	char** name{};

	name = (char**)malloc(sizeof(char*) * 5);
	
	for (int i = 0; i < 5; i++) {
		name[i] = (char*)malloc(sizeof(char) * 100);		
		//scanf("%s", temp);
	}

	strcpy(name[0],"tiger");
	strcpy(name[1], "horse");
	strcpy(name[2], "dog");
	strcpy(name[3], "rabbit");
	strcpy(name[4], "giraffe");


	for (int i = 0; i < 4; i++) {
		printf("%s, ", name[i]);
	}

	printf("%s", name[4]);
}
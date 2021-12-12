#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	printf("Top\n");
	sayHi("David", 23);
	sayHi("Santiago", 24);
	printf("Bottom\n");
	
	return 0;
}

void sayHi(char name[], int age) {
	printf("Hello %sm you are %d\n", name, age);
}

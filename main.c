#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char name[] = "David";	
	printf("My name is %s and it starts with %c\n", name, name[0]);
	
	int age = 23;
	printf("I am %d years old\n", age);
	
	char gender[] = "man";
	printf("I am a %s\n", gender);
	
	return 0;
}

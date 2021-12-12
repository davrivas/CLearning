#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	printBox();
	printBox();
	printBox();
	
	return 0;
}

int printBox() {
	printf(" --\n");
	printf("|\\/|\n");
	printf("|/\\|\n");
	printf(" --\n");
	return 0;
}

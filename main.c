#include <stdio.h>
#include <stdlib.h>

double cube(double num); // prototype

int main(int argc, char *argv[]) {
	printf("Answer: %f", cube(3.0));
	
	return 0;
}

double cube(double num) {
	return num * num * num;
}

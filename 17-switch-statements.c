#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char grade = 'F';
	
	switch (grade) {
		case 'A':
			printf("You did great!");
			break;
		case 'B':
			printf("You did all right");
			break;
		case 'C':
			printf("You did poorly");
			break;
		case 'D':
			printf("You did very bad");
			break;
		case 'F':
			printf("You failed!");
			break;
		default:
			printf("Invalid grade!");
			break;
	}
	
	return 0;
}

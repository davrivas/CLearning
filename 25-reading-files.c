#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	//r read
	// w write
	// a append information to the file
	char line[255];
	FILE * fpointer = fopen("employees.txt", "r");
	
	fgets(line, 255, fpointer);
	fgets(line, 255, fpointer);
	printf("%s", line);
	
	fclose(fpointer);
	
	return 0;
}

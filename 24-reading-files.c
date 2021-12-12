#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	//r read
	// w write
	// a append information to the file
	FILE * fpointer = fopen("employees.txt", "a");
	
	//fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting");
	fprintf(fpointer, "\nKelly, Customer service");
	//fprintf(fpointer, "overriden");
	
	fclose(fpointer);
	
	return 0;
}

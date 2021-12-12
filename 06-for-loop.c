#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, start = 1, end = 10;
	
	printf("Numbers from %d to %d\n", start, end);
	
	for (i = start; i <= end; i++) {
		printf("%d\n", i);
	}
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num1 = 2,
	 num2 = 2,
	 sum = getSum(num1, num2);
	
	printf("%d + %d = %d", num1, num2, sum);
	
	return 0;
}

int getSum(int num1, int num2) {
	return num1 + num2;
}

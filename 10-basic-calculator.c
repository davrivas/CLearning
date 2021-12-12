#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	double num1, num2;
	printf("Enter first number\n");	
	scanf("%lf", &num1);
	
	printf("Enter second number\n");
	scanf("%lf", &num2);
	
	double sum = num1 + num2;
	
	printf("Answer: %f", sum);
	
	return 0;
}

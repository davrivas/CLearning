#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	double num1;
	double num2;
	char op;
	
	printf("Enter a number\n");
	scanf("%lf", &num1);
	
	printf("Enter operator\n");
	scanf(" %c", &op);
	
	printf("Enter a number\n");
	scanf("%lf", &num2);
	
	if (op == '+') {
		printf("%f", num1 + num2);
	} else if (op == '-') {
		printf("%f", num1 - num2);
	} else if (op == '*') {
		 printf("%f", num1 * num2);
	} else if (op == '/') {
		if (num2 == 0) {
			printf("Cannot divide by 0");
		} else {
			printf("%f", num1 / num2);
		}
	} else {
		printf("Invalid operator");
	}
	
	return 0;
}

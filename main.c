#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char name[20];
	printf("Enter your name\n");
	fgets(name, 20, stdin);
	printf("Your name is %s\n", name);
	printf("\n");
	
	int age; 
	printf("Enter your age\n");
	scanf("%d", &age);
	printf("You are %d years old\n", age);
	printf("\n");
	
	int gender;
	printf("Type 0 if you are a woman\n");
	printf("Type 1 if you are a man\n");
	scanf("%d", &gender);
	
	if (gender == 0)
		printf("You are a woman\n");
	else if (gender == 1)
		printf("You are a man\n");
	else
		printf("Invalid option\n");
	
	return 0;
}

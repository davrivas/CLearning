#include <stdio.h>
#include <stdlib.h>

struct Student {
	char name[50];
	char major[50];
	int age;
	double gpa;
};

int main(int argc, char *argv[]) {
	struct Student student1;
	student1.age = 22;
	student1.gpa = 3.2;
	strcpy(student1.name, "Jim");
	strcpy(student1.major, "Bussiness");
	
	struct Student student2;
	student2.age = 20;
	student2.gpa = 2.5;
	strcpy(student2.name, "Pam");
	strcpy(student2.major, "Art");
	
	struct Student students[] = { student1, student2 };
	
	int i, arrayLength = sizeof(students)/sizeof(students[0]);
	
	for (i = 0; i < arrayLength; i++) {
		printf("Student %d\n", i+1);
		printf("Gpa: %f\n", students[0].gpa);
		printf("Name: %s\n", students[0].name);
		printf("Major: %s\n", students[0].major);
		printf("Age: %d years old\n", students[0].age);
		printf("\n");
	}
	
	return 0;
}

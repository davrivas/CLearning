#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char color[20],
	pluralNoun[20],
	celebrityF[20],
	celebrityL[20];
	
	printf("Enter a color\n");
	scanf("%s", color);
	
	printf("Enter the plural noun\n");
	scanf("%s", pluralNoun);
	
	printf("Enter a celebrity\n");
	scanf("%s%s", celebrityF, celebrityL);
	
	printf("\n");
	
	printf("Roses are %s\n", color);
	printf("%s are blue\n", pluralNoun);
	printf("I love %s %s", celebrityF, celebrityL);	
	
	return 0;
}

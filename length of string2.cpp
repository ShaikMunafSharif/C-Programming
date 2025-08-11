#include <stdio.h>
int main() {
	char name[30];
	int count=0,i=0;
	printf("Enter Name: ");
	gets(name);
	while(name[i]!='\0') {
		count++;
		i++;
	}
	puts(name);
	printf("Length of string is: %d",count);
}

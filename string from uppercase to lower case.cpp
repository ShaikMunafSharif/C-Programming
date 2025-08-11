#include <stdio.h>
#include <string.h>
int main() {
	char s1[30];
	printf("Enter a string: ");
	gets(s1);
	strlwr(s1);
	printf("String is: %s",s1);
	return 0;
}

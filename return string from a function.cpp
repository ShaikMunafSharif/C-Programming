#include <stdio.h>
char* display();
int main() {
	char *str;
	str=display();
	printf("String is: %s",str);
}
char* display() {
	return "Munaf";
}

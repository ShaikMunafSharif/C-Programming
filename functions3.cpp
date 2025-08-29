#include <stdio.h>
char fun();
int main() {
	char ch;
	ch=fun();
	printf("ch=%c",ch);
}
char fun() {
	char c;
	printf("Enter a character: ");
	scanf("%c",&c);
	return c;
}

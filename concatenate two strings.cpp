#include <stdio.h>
#include <string.h>
int main() {
	char s1[30]="Shaik Munaf";
	char s2[]=" Sharif";
	strcat(s1,s2);
	printf("String after concatenation is: %s\n",s1);
	return 0;
}

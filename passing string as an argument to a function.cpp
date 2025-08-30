#include <stdio.h>
int modify(char*,char*);
int main() {
	char str1[]="Munaf";
	char str2[]="Sharif";
	modify(str1,str2);
}
int modify(char* str1,char* str2) {
	int i,l=0;
	for(i=0;str2[i]!='\0';i++) {
		l=l+1;
	}
	str2[1]='z';
	printf("Length of string 1 is: %d\n",l);
	printf("Both the strings are: %s %s",str1,str2);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	FILE *fp = NULL;
	char str[30];
	fp=fopen("abc.txt","a");
	if(fp==NULL) {
		printf("Error");
		exit(1);
	} 
	printf("Enter the content you want to append: ");
	gets(str);
	//fputs(str,fp);
	fprintf(fp,"\n %s",str);
	printf("\nSuccessfully appended.");
	return 0;
}

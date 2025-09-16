#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	FILE *fp = NULL;
	char str[50];
	int i,a=10;
	char ch = 's';
	fp = fopen("abc.text","w");
	if(fp==NULL) {
		printf("Error");
		exit(1);
	}
	printf("Enter the string: ");
	gets(str);
	fprintf(fp,"%d %s %c",a,str,ch);
	fclose(fp);
	return 0;
}

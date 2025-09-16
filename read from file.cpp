#include <stdio.h>
#include <stdlib.h>
int main() {
	FILE *fp = NULL;
	char ch;
	char str[50];
	fp=fopen("abc.txt","r");
	if(fp==NULL) {
		printf("Error");
		exit(1);
	}
	while(fgets(str,45,fp) != NULL) {
		printf("%s",str);
	}
	fclose(fp);
	return 0;
}

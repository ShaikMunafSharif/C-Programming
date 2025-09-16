#include <stdio.h>
#include <stdlib.h>
int main() {
	FILE *fp = NULL;
	char str[30];
	fp=fopen("abc.txt","r+");
	if(fp==NULL) {
		printf("Error");
		exit(1);
	}
	while(!feof(fp)) {
		fgets(str,5,fp);
		printf("%s",str);
	}
	fputs("Munaf",fp);
	//fputc('z',fp);
	fclose(fp);
	return 0;
}

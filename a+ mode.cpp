#include <stdio.h>
#include <stdlib.h>
int main() {
	FILE *fp = NULL;
	char ch;
	fp=fopen("a.txt","a+");
	if(fp==NULL) {
		printf("no file");
		exit(1);
	}
	while(!feof(fp)) {
		ch=fgetc(fp);
		printf("%c",ch);
	}
	fputs("This is awesome",fp);
	fclose(fp);
	return 0;
}

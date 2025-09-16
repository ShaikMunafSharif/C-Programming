#include <stdio.h>
#include <stdlib.h>
int main() {
	FILE *fp=NULL;
	char ch;
	char str[50];
	fp=fopen("abc.txt","r");
	if(fp==NULL) {
		printf("Error");
		exit(1);
	}
	fseek(fp,6,SEEK_SET);
	ch=fgetc(fp);
	printf("%c",ch);
	fseek(fp,-3,SEEK_CUR);
	ch=fgetc(fp);
	printf("\n%c",ch);
	fseek(fp,-3,SEEK_END);
	ch=fgetc(fp);
	printf("\n%c",ch);
	fclose(fp);
	return 0;
}

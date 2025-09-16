#include <stdio.h>
#include <stdlib.h>
int main() {
	FILE *fp = NULL;
	fp=fopen("abc.txt","r+");
	if(fp==NULL) {
		printf("Error");
		exit(1);
	}
	fputs("Sharif",fp);
	fputc('z',fp);
	fclose(fp);
	return 0;
}

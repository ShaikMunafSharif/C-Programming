#include <stdio.h>
int main() {
	char str[] = "I am Munaf Sharif";
	char *ptr;
	ptr=str;
	printf("%c\n",*ptr);
	printf("ptr address = %u\n",ptr);
	printf("%c\n",*(ptr++ +1));
	printf("ptr address = %u\n",ptr);
	printf("%c\n",*(++ptr +10)-32);
	printf("%c %c %c\n",*ptr,*ptr,*++ptr,*--ptr);
	return 0;
}

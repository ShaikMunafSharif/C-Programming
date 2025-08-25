#include <stdio.h>
int main() {
	int a=-11;
	int *ptr=&a;
	*ptr=12;
	printf("a=%d",a);
	return 0;
}

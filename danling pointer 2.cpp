#include <stdio.h>
#include <stdlib.h>
int *f() {
	int a=9;
	return &a;
}
int main() {
	int *ptr=f();
	printf("%d\n",ptr);
	return 0;
}

#include <stdio.h>
int main() {
	int a[5] = {1,4,2,-8,0};
	int *p=&a[0];
	printf("Value is: %d\n",*p);
	printf("Address of element is: %u\n",p);
	p=p+2;
	printf("Value is: %d\n",*p);
	printf("Address of element is: %u\n",p);
	return 0;
}

#include <stdio.h>
int main() {
	int a=10,b=9;
	int *p,*q;
	p=&a;
	q=&b;
	printf("Value of a = %d\n",a);
	printf("value of a = %d\n",*p);
	printf("Address of a: %x\n",&a);
	printf("Address of a: %x\n",p);
	printf("Address of a: %x\n",&p);
	return 0;
}

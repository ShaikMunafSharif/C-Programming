#include <stdio.h>
int main() {
	int a=5,b,c,d,e;
	b=~a;
	c=(a+1)<<2;
	d=(a+2)>>1;
	e=~(a+3);
	printf("%d\n%d\n%d\n%d",b,c,d,e);
	return 0;
}

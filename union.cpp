#include <stdio.h>
union abc {
	int a;char b;float c;
};
int main() {
	union abc u;
	union abc *ptr=&u;
	u.a=1;
	u.b=97;
	u.c=78.90;
	printf("a value is: %d",ptr->a);
	printf("\nb value is: %c",ptr->b);
	printf("\nc value is: %f",ptr->c);
	return 0;
}

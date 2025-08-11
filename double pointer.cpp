#include <stdio.h>
int main() {
	int a=10;
	int *p=&a;
	int **q=&p;
	int **r=&p;
	*p=12;
	**q=17;
	**r=78;
	printf("a=%d\n",a);
	printf("a=%d\n",*p);
	printf("a=%d\n",*(*(q)));
	printf("a=%d\n",*(*r));
	printf("address of q=%x\n",r,&q);
	printf("address of p=%x %x",&p,q);
	return 0;
}

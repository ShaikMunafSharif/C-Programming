#include <stdio.h>
int main() {
	int a[] = {2,4,3,0,-7};
	int *p=a;
	int *q=&a[3];
	printf("q-p=%d\n",q-p);
	printf("p-q=%d\n",p-q);
	printf("Value=%d\n",*q);
	q=q-2;
	printf("Value=%d\n",*q);
	p=p+2;
	printf("q-p=%d",q-p);
	q=q-2;
	printf("Value %d",*q);
	return 0;
}

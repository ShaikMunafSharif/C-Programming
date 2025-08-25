#include <stdio.h>
int main() {
	int a=3;
	int *ptr1=NULL;
	int *ptr2=NULL;
	if(ptr1==ptr2) {
		printf("Both are null pointer");
	} else {
		printf("%d\n",*ptr1);
	}
	return 0;
}

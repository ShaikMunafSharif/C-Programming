#include <stdio.h>
int main() {
	int n1,n2,n3;
	printf("Enter the n1: ");
		scanf("%d",&n1);
	printf("\nEnter the n2: ");
		scanf("%d",&n2);
	printf("\nEnter the n3: ");
	scanf("%d",&n3);
	if (n1>n2 && n1>n3) {
		printf("%d is the maximum number.",n1);
	} else if (n2>n1 && n2>n3) {
		printf("%d is the maximum number.",n2);
	} else {
		printf("%d is the maximum number.",n3);
	}
	return 0;
}

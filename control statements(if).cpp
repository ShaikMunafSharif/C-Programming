#include <stdio.h>
int main() {
	int a;
	printf("Enter a: ");
	scanf("%c",&a);
	if(a) {
		printf("Inside the block.");
	} else {
		printf("Outside the block.");
	}
	return 0;
}

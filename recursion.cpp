#include <stdio.h>
int display(int n) {
	if(n<1) {
	}
	else {
		printf("%d\n",n);
		display(n-1);
		printf("%d",n);
	}
}
int main() {
	int n=3;
	display(n);
}

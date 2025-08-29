#include <stdio.h>
int sum(int,int);

int main() {
	sum(5,4);
}

int sum(int a,int b) {
	int s=a+b;
	printf("Sum=%d",s);
}

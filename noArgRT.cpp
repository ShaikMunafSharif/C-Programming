#include <stdio.h>
float sum(void);
int main(int) {
	float s;
	s=sum();
	printf("Sum=%f",s);
}
float sum() {
	int a=5,b=7,sum=0;
	sum=a+b;
	return sum;
}

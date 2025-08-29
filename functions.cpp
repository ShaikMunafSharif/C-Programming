#include <stdio.h>
int sum() {
	int a,b,sum=0;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("Sum=%d\n",sum);
}
int main() {
	sum();
	printf("Hello\n");
	sum();
	sum();
}

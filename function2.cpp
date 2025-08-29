#include <stdio.h>

int sum();

int main() {
	sum();
	return 0;
}

int sum() {
	int a,b,result;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	result=a+b;
	printf("Sum=%d\n",result);
	return result;
} 

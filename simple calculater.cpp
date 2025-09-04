#include <stdio.h>
int add(int a,int b) {
	printf("Addition is: %d\n",a+b);
}
int sub(int a,int b) {
	printf("Subtraction is: %d\n",a-b);
}
int mult(int a,int b) {
	printf("Multiplication is: %d\n",a*b);
}
int div(int a,int b) {
	printf("Division is: %d\n",a/b);
}
int main() {
	int ch,a,b;
	printf("1 for add\n 2 for sub\n 3 for mult\n 4 for div\n");
	printf("Enter Choice: ");
	scanf("%d",&ch);
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	switch(ch) {
		case 1: add(a,b); break;
		case 2: sub(a,b); break;
		case 3: mult(a,b); break;
		case 4: div(a,b);break;
		default: printf("Enter a valid choice");
	}
	return 0;
}

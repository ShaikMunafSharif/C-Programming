#include <stdio.h>
int sum(int a,int b) {
	printf("Sum=%d\n",a+b);
}
int sub(int a, int b) {
	printf("Sub=%d\n",a-b);
}
int display(int(*fptr)(int,int)) {
	fptr(5,1);
}
int main() {
	display(sum);
	display(sub);
	return 0;
}

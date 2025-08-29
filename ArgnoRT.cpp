#include <stdio.h>

void sum(float,float);

int main() {
	float x,y;
	printf("Enter x and y: ");
	scanf("%f%f",&x,&y);
	sum(x,y);
	return 0;
}
void sum(float a,float b) {
	printf("Sum=%f\n",a+b);
}

#include <stdio.h>

void fun();
int a=50;
int b=56;

int main() {
	//int a=1;
	fun(); 
	{
		int a=10;
		printf("\nInside block1: %d",a);
	}
	{
		printf("\nInside block2: %d",a++);
	}
	printf("\nInside main: %d",a);
	printf("\nInside main: %d",b);
	return 0;
}
void fun() {
	int a=23;
	int b=89;
	printf("\nInside fun1: %d %d",a,b);
}

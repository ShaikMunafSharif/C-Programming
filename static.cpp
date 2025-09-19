#include <stdio.h>
void display();
int main() {
	display();
	display();
}
void display() {
	static int x;
	x+=10;
	printf("\nx=%d",x);
}

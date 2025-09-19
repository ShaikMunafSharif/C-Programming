#include <stdio.h>
int i=5;
int main() {
	extern int j;
	printf("%d %d",i,j);
	int i=10;
	return 0;
}

#include <stdio.h>
int main() {
	int i,j;
	while(i<3) {
		while(j<=3) {
			printf("%d",j++);
		}
		printf("%d",i++);
	}
	return 0;
}

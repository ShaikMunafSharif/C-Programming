#include <stdio.h>
int main() {
	int a,sum=0;
	while(1) {
		printf("Enter a number: ");
		scanf("%d",&a);
		if(a<0) {
			break;
		}
		sum=sum+a;
	}
	printf("Sum=%d",sum);
	return 0;
}

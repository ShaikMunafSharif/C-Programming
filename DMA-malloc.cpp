#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,*ptr;
	printf("Enter total no of values: ");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	printf("\nEnter the values: ");
	for(i=0;i<n;i++) {
		scanf("%d",(ptr+i));
	}
	printf("\n The entered values are: ");
	for(i=0;i<n;i++) {
		printf("%d",*(ptr+i));
	}
	free(ptr);
}

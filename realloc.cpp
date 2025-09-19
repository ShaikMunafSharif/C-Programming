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
	printf("\nEnter updated size of n: ");
	scanf("%d",&n);
	int *ptr1=(int*)realloc(ptr,n*sizeof(int));
	printf("\n Previous address: %d,new address: %d",ptr,ptr1);
	printf("\n The entered values are: ");
	for(i=0;i<n;i++) {
		printf("%d\t",*(ptr1+i));
	}
	free(ptr1);
	return 0;
}

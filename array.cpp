#include <stdio.h>
int main() {
	int a[5],i;
	printf("Enter array elements: ");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	printf("\nArray element at index %d is: %d",i,a[i]);
	for(i=4;i>=0;i--)
	printf("\nArray element at index %d is: %d",i,a[i]);
	return 0;
}

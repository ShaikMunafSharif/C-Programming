#include <stdio.h>
int main() {
	int a[10],i;
	int even=0,odd=0;
	printf("Enter an array elements: ");
	for(i=0;i<5;i++) {
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		even++;
		else
		odd++;
	}
	printf("\nTotal number of even numbers: %d",even);
	printf("\nTotal number of odd numbers: %d",odd);
	return 0;
}

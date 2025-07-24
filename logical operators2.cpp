#include <stdio.h>
int main() {
	int a=10,b=5,result,result2,r3,r4;
	result=(a>b)&&a++;
	result2=(a<b)||a++;
	printf("%d\n",result);
	printf("%d\n",result2);
	printf("%d\n",a);
	printf("%d\n%d",r3,r4);
	return 0;
}

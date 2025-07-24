#include <stdio.h>
int main() {
	int a=10,b=5,result,result2;
	result=a>b&&b!=10&&b<11&&a>5;
	printf("%d\n",result);
	result2=a<b||b==4;
	printf("%d",result2);
	return 0;
}

#include <stdio.h>
int main() {
	void *VP;
	int a=5;
	float b=1.56;
	char ch='c';
	VP=&a;
	printf("a=%d\n",*(int*)VP);
	VP=&b;
	printf("b=%d\n",*(float*)VP);
	VP=&ch;
	printf("ch=%c\n",*(char*)VP);
	return 0;
}

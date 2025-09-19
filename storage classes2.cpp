#include <stdio.h>
int main() {
	auto int x=10;
	{
		auto int x=20;
		printf("x=%d",x);
	}
	printf("\nx=%d",x);
	return 0;
}

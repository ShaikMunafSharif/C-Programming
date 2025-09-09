#include <stdio.h>
struct abc {
	char a;
	int b;
};
int main() {
	struct abc s;
	printf("%d",sizeof(s));
	return 0;
}

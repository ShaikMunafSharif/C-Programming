#include <stdio.h>
int main() {
	printf("Date: %s",__DATE__);
	printf("\nTime: %s",__TIME__);
	printf("\nFile: %s",__FILE__);
	printf("\nLine: %d",__LINE__);
	printf("\nAnsi: %d",__STDC__);
	return 0;
}
